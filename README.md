# Vec Search Benchmark

Benchmark for 256-bit vectorized search.

Suppose we have 8 32-bit integers in a row, given a target number, we want to
know the position of the target in those 8 32-bit integers. If doesn't exist,
the position is `-1`. In vectorized case, if the mask is `0`, then the target
doesn't exist.

## Run

To run the experiments:

    make test

You can modify the range in [src/main.cc](src/main.cc).

## Results

Results on my personal laptop.

<pre>Running build/build
Run on (8 X 3500 MHz CPU s)
CPU Caches:
  L1 Data 32K (x4)
  L1 Instruction 32K (x4)
  L2 Unified 256K (x4)
  L3 Unified 6144K (x1)
Load Average: 2.41, 2.96, 2.94
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------------
Benchmark                              Time             CPU   Iterations
------------------------------------------------------------------------
<font color="#00CD00">search/empty_loop/8           </font><font color="#CDCD00">      4.22 ns         4.21 ns   </font><font color="#00CDCD"> 170690707</font>
<font color="#00CD00">search/empty_loop/16          </font><font color="#CDCD00">      6.78 ns         6.77 ns   </font><font color="#00CDCD"> 100477828</font>
<font color="#00CD00">search/empty_loop/32          </font><font color="#CDCD00">      19.9 ns         19.9 ns   </font><font color="#00CDCD">  34658427</font>
<font color="#00CD00">search/empty_loop/64          </font><font color="#CDCD00">      30.5 ns         30.5 ns   </font><font color="#00CDCD">  22755700</font>
<font color="#00CD00">search/empty_loop/128         </font><font color="#CDCD00">      55.4 ns         55.0 ns   </font><font color="#00CDCD">  13627027</font>
<font color="#00CD00">search/empty_loop/256         </font><font color="#CDCD00">       121 ns          120 ns   </font><font color="#00CDCD">   6340810</font>
<font color="#00CD00">search/empty_loop/512         </font><font color="#CDCD00">       183 ns          183 ns   </font><font color="#00CDCD">   3454610</font>
<font color="#00CD00">search/empty_loop/1024        </font><font color="#CDCD00">       356 ns          355 ns   </font><font color="#00CDCD">   1994854</font>
<font color="#00CD00">search/empty_loop/2048        </font><font color="#CDCD00">       687 ns          686 ns   </font><font color="#00CDCD">   1010099</font>
<font color="#00CD00">search/empty_loop/4096        </font><font color="#CDCD00">      1585 ns         1571 ns   </font><font color="#00CDCD">    489928</font>
<font color="#00CD00">search/empty_loop/8192        </font><font color="#CDCD00">      2893 ns         2886 ns   </font><font color="#00CDCD">    208904</font>
<font color="#00CD00">search/empty_loop/16384       </font><font color="#CDCD00">      6043 ns         6031 ns   </font><font color="#00CDCD">    122026</font>
<font color="#00CD00">search/empty_loop/32768       </font><font color="#CDCD00">     11632 ns        11604 ns   </font><font color="#00CDCD">     59242</font>
<font color="#00CD00">search/empty_loop/65536       </font><font color="#CDCD00">     26924 ns        26738 ns   </font><font color="#00CDCD">     29559</font>
<font color="#00CD00">search/empty_loop/131072      </font><font color="#CDCD00">     61760 ns        61564 ns   </font><font color="#00CDCD">     11988</font>
<font color="#00CD00">search/empty_loop/262144      </font><font color="#CDCD00">    100068 ns        99823 ns   </font><font color="#00CDCD">      5993</font>
<font color="#00CD00">search/empty_loop/524288      </font><font color="#CDCD00">    199674 ns       199009 ns   </font><font color="#00CDCD">      3691</font>
<font color="#00CD00">search/empty_loop/1048576     </font><font color="#CDCD00">    412162 ns       410746 ns   </font><font color="#00CDCD">      1708</font>
<font color="#00CD00">search/vec_compare/8          </font><font color="#CDCD00">      6.63 ns         6.58 ns   </font><font color="#00CDCD"> 113861295</font>
<font color="#00CD00">search/vec_compare/16         </font><font color="#CDCD00">      15.3 ns         15.2 ns   </font><font color="#00CDCD">  44950017</font>
<font color="#00CD00">search/vec_compare/32         </font><font color="#CDCD00">      29.2 ns         29.1 ns   </font><font color="#00CDCD">  23209660</font>
<font color="#00CD00">search/vec_compare/64         </font><font color="#CDCD00">      51.1 ns         50.9 ns   </font><font color="#00CDCD">  13604827</font>
<font color="#00CD00">search/vec_compare/128        </font><font color="#CDCD00">      93.1 ns         92.9 ns   </font><font color="#00CDCD">   7065160</font>
<font color="#00CD00">search/vec_compare/256        </font><font color="#CDCD00">       203 ns          200 ns   </font><font color="#00CDCD">   3854172</font>
<font color="#00CD00">search/vec_compare/512        </font><font color="#CDCD00">       357 ns          356 ns   </font><font color="#00CDCD">   1444548</font>
<font color="#00CD00">search/vec_compare/1024       </font><font color="#CDCD00">       691 ns          689 ns   </font><font color="#00CDCD">    973806</font>
<font color="#00CD00">search/vec_compare/2048       </font><font color="#CDCD00">      1393 ns         1389 ns   </font><font color="#00CDCD">    492154</font>
<font color="#00CD00">search/vec_compare/4096       </font><font color="#CDCD00">      2766 ns         2756 ns   </font><font color="#00CDCD">    251607</font>
<font color="#00CD00">search/vec_compare/8192       </font><font color="#CDCD00">      6576 ns         6508 ns   </font><font color="#00CDCD">    121894</font>
<font color="#00CD00">search/vec_compare/16384      </font><font color="#CDCD00">     11792 ns        11763 ns   </font><font color="#00CDCD">     47878</font>
<font color="#00CD00">search/vec_compare/32768      </font><font color="#CDCD00">     22926 ns        22877 ns   </font><font color="#00CDCD">     31954</font>
<font color="#00CD00">search/vec_compare/65536      </font><font color="#CDCD00">     43965 ns        43892 ns   </font><font color="#00CDCD">     15845</font>
<font color="#00CD00">search/vec_compare/131072     </font><font color="#CDCD00">     97696 ns        97397 ns   </font><font color="#00CDCD">      7954</font>
<font color="#00CD00">search/vec_compare/262144     </font><font color="#CDCD00">    205544 ns       205012 ns   </font><font color="#00CDCD">      3448</font>
<font color="#00CD00">search/vec_compare/524288     </font><font color="#CDCD00">    354847 ns       354072 ns   </font><font color="#00CDCD">      1921</font>
<font color="#00CD00">search/vec_compare/1048576    </font><font color="#CDCD00">    721229 ns       719613 ns   </font><font color="#00CDCD">       971</font>
<font color="#00CD00">search/linear_compare/8       </font><font color="#CDCD00">      13.0 ns         13.0 ns   </font><font color="#00CDCD">  56985077</font>
<font color="#00CD00">search/linear_compare/16      </font><font color="#CDCD00">      33.3 ns         33.2 ns   </font><font color="#00CDCD">  22695905</font>
<font color="#00CD00">search/linear_compare/32      </font><font color="#CDCD00">      54.9 ns         54.8 ns   </font><font color="#00CDCD">  11257428</font>
<font color="#00CD00">search/linear_compare/64      </font><font color="#CDCD00">       116 ns          115 ns   </font><font color="#00CDCD">   6461681</font>
<font color="#00CD00">search/linear_compare/128     </font><font color="#CDCD00">       229 ns          228 ns   </font><font color="#00CDCD">   3051864</font>
<font color="#00CD00">search/linear_compare/256     </font><font color="#CDCD00">       501 ns          497 ns   </font><font color="#00CDCD">   1519802</font>
<font color="#00CD00">search/linear_compare/512     </font><font color="#CDCD00">       980 ns          977 ns   </font><font color="#00CDCD">    703921</font>
<font color="#00CD00">search/linear_compare/1024    </font><font color="#CDCD00">      1791 ns         1788 ns   </font><font color="#00CDCD">    370554</font>
<font color="#00CD00">search/linear_compare/2048    </font><font color="#CDCD00">      3783 ns         3776 ns   </font><font color="#00CDCD">    191692</font>
<font color="#00CD00">search/linear_compare/4096    </font><font color="#CDCD00">      9256 ns         9237 ns   </font><font color="#00CDCD">     78160</font>
<font color="#00CD00">search/linear_compare/8192    </font><font color="#CDCD00">     47417 ns        47296 ns   </font><font color="#00CDCD">     15160</font>
<font color="#00CD00">search/linear_compare/16384   </font><font color="#CDCD00">    111706 ns       111488 ns   </font><font color="#00CDCD">      5777</font>
<font color="#00CD00">search/linear_compare/32768   </font><font color="#CDCD00">    231025 ns       230440 ns   </font><font color="#00CDCD">      3040</font>
<font color="#00CD00">search/linear_compare/65536   </font><font color="#CDCD00">    456560 ns       455699 ns   </font><font color="#00CDCD">      1528</font>
<font color="#00CD00">search/linear_compare/131072  </font><font color="#CDCD00">   1076608 ns      1063611 ns   </font><font color="#00CDCD">       727</font>
<font color="#00CD00">search/linear_compare/262144  </font><font color="#CDCD00">   1919230 ns      1914258 ns   </font><font color="#00CDCD">       317</font>
<font color="#00CD00">search/linear_compare/524288  </font><font color="#CDCD00">   3857320 ns      3848523 ns   </font><font color="#00CDCD">       185</font>
<font color="#00CD00">search/linear_compare/1048576 </font><font color="#CDCD00">   7458187 ns      7444432 ns   </font><font color="#00CDCD">        91</font>
</pre>

Below is a graph about first 12 search size results:

![Time of different search sizes](figure/figure1.png)

