# Vec Search Benchmark

Benchmark for 256 bit vectorized search.

## Run

To run the experiments:

    `make test`

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
Load Average: 2.36, 2.69, 2.49
***WARNING*** CPU scaling is enabled, the benchmark real time measurements may be noisy and will incur extra overhead.
------------------------------------------------------------------------
Benchmark                              Time             CPU   Iterations
------------------------------------------------------------------------
<font color="#00CD00">search/empty_loop/8           </font><font color="#CDCD00">      4.02 ns         4.01 ns   </font><font color="#00CDCD"> 169843528</font>
<font color="#00CD00">search/empty_loop/16          </font><font color="#CDCD00">      6.52 ns         6.51 ns   </font><font color="#00CDCD"> 102294677</font>
<font color="#00CD00">search/empty_loop/64          </font><font color="#CDCD00">      30.1 ns         30.0 ns   </font><font color="#00CDCD">  23143767</font>
<font color="#00CD00">search/empty_loop/256         </font><font color="#CDCD00">      89.1 ns         89.0 ns   </font><font color="#00CDCD">   7958186</font>
<font color="#00CD00">search/empty_loop/1024        </font><font color="#CDCD00">       392 ns          390 ns   </font><font color="#00CDCD">   2029078</font>
<font color="#00CD00">search/empty_loop/4096        </font><font color="#CDCD00">      1417 ns         1411 ns   </font><font color="#00CDCD">    488226</font>
<font color="#00CD00">search/empty_loop/16384       </font><font color="#CDCD00">      5673 ns         5664 ns   </font><font color="#00CDCD">    123125</font>
<font color="#00CD00">search/empty_loop/65536       </font><font color="#CDCD00">     22413 ns        22374 ns   </font><font color="#00CDCD">     28686</font>
<font color="#00CD00">search/empty_loop/262144      </font><font color="#CDCD00">     97597 ns        97339 ns   </font><font color="#00CDCD">      7137</font>
<font color="#00CD00">search/empty_loop/1048576     </font><font color="#CDCD00">    586323 ns       583771 ns   </font><font color="#00CDCD">      1361</font>
<font color="#00CD00">search/empty_loop/4194304     </font><font color="#CDCD00">   1980481 ns      1973261 ns   </font><font color="#00CDCD">       335</font>
<font color="#00CD00">search/empty_loop/8388608     </font><font color="#CDCD00">   3307492 ns      3300868 ns   </font><font color="#00CDCD">       200</font>
<font color="#00CD00">search/vec_compare/8          </font><font color="#CDCD00">      6.07 ns         6.05 ns   </font><font color="#00CDCD"> 117124502</font>
<font color="#00CD00">search/vec_compare/16         </font><font color="#CDCD00">      12.2 ns         12.1 ns   </font><font color="#00CDCD">  55598446</font>
<font color="#00CD00">search/vec_compare/64         </font><font color="#CDCD00">      50.0 ns         49.9 ns   </font><font color="#00CDCD">  12893307</font>
<font color="#00CD00">search/vec_compare/256        </font><font color="#CDCD00">       174 ns          174 ns   </font><font color="#00CDCD">   4153362</font>
<font color="#00CD00">search/vec_compare/1024       </font><font color="#CDCD00">       661 ns          660 ns   </font><font color="#00CDCD">   1033632</font>
<font color="#00CD00">search/vec_compare/4096       </font><font color="#CDCD00">      2714 ns         2708 ns   </font><font color="#00CDCD">    262298</font>
<font color="#00CD00">search/vec_compare/16384      </font><font color="#CDCD00">     12240 ns        12192 ns   </font><font color="#00CDCD">     60083</font>
<font color="#00CD00">search/vec_compare/65536      </font><font color="#CDCD00">     45964 ns        45890 ns   </font><font color="#00CDCD">     15890</font>
<font color="#00CD00">search/vec_compare/262144     </font><font color="#CDCD00">    189371 ns       188812 ns   </font><font color="#00CDCD">      4093</font>
<font color="#00CD00">search/vec_compare/1048576    </font><font color="#CDCD00">    705357 ns       703521 ns   </font><font color="#00CDCD">      1007</font>
<font color="#00CD00">search/vec_compare/4194304    </font><font color="#CDCD00">   3485916 ns      3473962 ns   </font><font color="#00CDCD">       207</font>
<font color="#00CD00">search/vec_compare/8388608    </font><font color="#CDCD00">   5925524 ns      5902857 ns   </font><font color="#00CDCD">       113</font>
<font color="#00CD00">search/linear_compare/8       </font><font color="#CDCD00">      14.4 ns         14.4 ns   </font><font color="#00CDCD">  45381330</font>
<font color="#00CD00">search/linear_compare/16      </font><font color="#CDCD00">      27.7 ns         27.7 ns   </font><font color="#00CDCD">  22070873</font>
<font color="#00CD00">search/linear_compare/64      </font><font color="#CDCD00">       131 ns          130 ns   </font><font color="#00CDCD">   6553377</font>
<font color="#00CD00">search/linear_compare/256     </font><font color="#CDCD00">       551 ns          549 ns   </font><font color="#00CDCD">   1254700</font>
<font color="#00CD00">search/linear_compare/1024    </font><font color="#CDCD00">      1717 ns         1715 ns   </font><font color="#00CDCD">    393916</font>
<font color="#00CD00">search/linear_compare/4096    </font><font color="#CDCD00">      8508 ns         8494 ns   </font><font color="#00CDCD">     82928</font>
<font color="#00CD00">search/linear_compare/16384   </font><font color="#CDCD00">    106706 ns       106539 ns   </font><font color="#00CDCD">      6576</font>
<font color="#00CD00">search/linear_compare/65536   </font><font color="#CDCD00">    545349 ns       543830 ns   </font><font color="#00CDCD">      1504</font>
<font color="#00CD00">search/linear_compare/262144  </font><font color="#CDCD00">   1863937 ns      1860973 ns   </font><font color="#00CDCD">       372</font>
<font color="#00CD00">search/linear_compare/1048576 </font><font color="#CDCD00">   8218433 ns      8200202 ns   </font><font color="#00CDCD">        94</font>
<font color="#00CD00">search/linear_compare/4194304 </font><font color="#CDCD00">  29162511 ns     29121459 ns   </font><font color="#00CDCD">        24</font>
<font color="#00CD00">search/linear_compare/8388608 </font><font color="#CDCD00">  67886647 ns     67601514 ns   </font><font color="#00CDCD">        11</font>
</pre>

