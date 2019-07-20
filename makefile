# named colors
COLOR_RST = \e[0m
COLOR_ACT = \e[1;32m
COLOR_ARG = \e[1;35m

# build tools and flags
CC = clang++
LD = clang++

CCFLAGS = -fno-operator-names -march=native -std=c++17 -Wall -Wextra -mavx2 -O3
LDFLAGS = -lpthread -lbenchmark
OBJECTS = $(BUILD)/src/main.o
BUILD = build
BIN = $(BUILD)/build

# phonies
.PHONY: all clean test reconf rebuild
all: $(BIN)
clean:
	@echo -e "$(COLOR_ACT)removing $(COLOR_ARG)$(BUILD)$(COLOR_RST)..."
	rm -rf $(BUILD)/
test: all
	@echo -e "$(COLOR_ACT)running $(COLOR_ARG)$(BIN)$(COLOR_RST)..."
	$(BIN)
reconf:
	@echo -e "$(COLOR_ACT)reconfiguring$(COLOR_RST)..."
	./configure
rebuild: clean
	@$(MAKE) --no-print-directory all

# build rules
$(BUILD)/:
	@echo -e "$(COLOR_ACT)making directory $(COLOR_ARG)$(BUILD)/$(COLOR_RST)..."
	mkdir -p $(BUILD)/
$(BUILD)/src: | $(BUILD)/
	@echo -e "$(COLOR_ACT)making directory $(COLOR_ARG)$(BUILD)/src$(COLOR_RST)..."
	mkdir -p $(BUILD)/src
$(BUILD)/src/main.o: src/main.cc | $(BUILD)/src
	@echo -e "$(COLOR_ACT)compiling $(COLOR_ARG)src/main.cc$(COLOR_RST)..."
	$(CC) -c -o '$@' '$<' $(CCFLAGS)
$(BIN): $(OBJECTS) | $(BUILD)/
	@echo -e "$(COLOR_ACT)loading $(COLOR_ARG)build$(COLOR_RST)..."
	$(LD) -o '$@' $(OBJECTS) $(LDFLAGS)

