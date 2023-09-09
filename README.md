# versionConversion

Sample results look like this
```
===============================================================================

99% probability of being latest comp 1 version:

10000000 calls using if-else:                            3 ns per call
10000000 calls using range-lookup:                      13 ns per call
10000000 calls using unordered map:                      3 ns per call
10000000 calls using unordered map (with shortcut):      2 ns per call
10000000 calls using map:                               20 ns per call
10000000 calls using map (with shortcut):                1 ns per call
10000000 calls using switch-case:                        2 ns per call
10000000 calls using switch-case (with annotation):      3 ns per call

===============================================================================

Uniform probablility of any comp 1 version:

10000000 calls using if-else:                           33 ns per call
10000000 calls using range-lookup:                      34 ns per call
10000000 calls using unordered map:                      4 ns per call
10000000 calls using unordered map (with shortcut):      5 ns per call
10000000 calls using map:                               56 ns per call
10000000 calls using map (with shortcut):               60 ns per call
10000000 calls using switch-case:                       15 ns per call
10000000 calls using switch-case (with annotation):     13 ns per call

===============================================================================
```
