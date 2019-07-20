// ml:ccf += -mavx2
// ml:ldf += -lpthread -lbenchmark
#include <iostream>
#include <random>
#include <vector>
#include <benchmark/benchmark.h>
#include <immintrin.h>
#include <emmintrin.h>

struct search : benchmark::Fixture
{
    void SetUp(const ::benchmark::State& state)
    {
        a = _mm256_set_epi32(1, 2, 3, 4, 5, 6, 7, 8);

        std::random_device rd{};
        std::mt19937 gen{rd()};
        std::uniform_int_distribution<> dis(1, 16);

        n = state.range(0);
        targets.reserve(n);
        targets.resize(n);
        for (auto& i : targets)
            i = dis(gen);
    }

    int n;
    __m256i a;
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> targets;
};

BENCHMARK_DEFINE_F(search, empty_loop)(benchmark::State& st)
{
    for (auto _ : st) {
        for (auto target : targets)
            benchmark::DoNotOptimize(target);
    }
}

BENCHMARK_REGISTER_F(search, empty_loop)
    ->RangeMultiplier(2)->Range(8, 8<<17);

BENCHMARK_DEFINE_F(search, vec_compare)(benchmark::State& st)
{
    for (auto _ : st) {
        for (auto target : targets) {
            __m128i t = _mm_cvtsi32_si128(target);
            __m256i b = _mm256_broadcastd_epi32(t);
            __m256i cmpeq = _mm256_cmpeq_epi32(a, b);
            int mask = _mm256_movemask_ps(cmpeq);
            int pos = __builtin_ctz(mask);
            benchmark::DoNotOptimize(pos);
        }
    }
}

BENCHMARK_REGISTER_F(search, vec_compare)
    ->RangeMultiplier(2)->Range(8, 8<<17);

BENCHMARK_DEFINE_F(search, linear_compare)(benchmark::State& st)
{
    for (auto _ : st) {
        for (auto target : targets) {
            int pos = -1;
            for (auto i = 0; i < 8; i++)
                if (v[i] == target) {
                    pos = i;
                    break;
                }
            benchmark::DoNotOptimize(pos);
        }
    }
}

BENCHMARK_REGISTER_F(search, linear_compare)
    ->RangeMultiplier(2)->Range(8, 8<<17);

BENCHMARK_MAIN();

