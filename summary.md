# Project Status

このファイルは markdownify_full plugin により自動生成されています (rev.bb176b6 Merge branch 'master' of https://github.com/ProgrammingDaisukiClub/Problems2020, uploaded by emtsubasa @ DESKTOP-K8H6ARU)

## Summary

問題|担当|解答|入力|出力|入検|出検
:---|:---|:---|:---|:---|:---|:---
B: ジョウモン|suzu,shiro| :white_check_mark: 3+1| :white_check_mark: 13| :white_check_mark: 3/3| :x: | :wavy_dash: 
C: ロボットシミュレーション|reiya,suzu| :white_check_mark: 3+0| :white_check_mark: 12| :white_check_mark: 3/3| :white_check_mark: | :wavy_dash: 
D: ジョウリバー|kumachan,shiro| :white_check_mark: 3+0| :white_check_mark: 12| :white_check_mark: 3/3| :x: | :wavy_dash: 
E: 人助け|tsubasa,kumachan| :white_check_mark: 3+0| :white_check_mark: 14| :white_check_mark: 3/3| :x: | :wavy_dash: 
F: JANKEN|tsubasa,reiya| :white_check_mark: 3+0| :white_check_mark: 14| :white_check_mark: 3/3| :white_check_mark: | :wavy_dash: 
G: 文字列の問題|yamad,tsubasa| :white_check_mark: 2+0| :white_check_mark: 13| :white_check_mark: 2/2| :x: | :wavy_dash: 
H: 履修登録|shiro,yamad| :white_check_mark: 4+0| :white_check_mark: 14| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
I: おかし|yamad,tsubasa| :white_check_mark: 2+2| :white_check_mark: 14| :white_check_mark: 2/2| :x: | :wavy_dash: 
J: タタラ製鉄所|shiro,tsubasa| :large_blue_diamond: 1+0| :x: 1| :x: 1/1| :x: | :wavy_dash: 
X: A + B|Assignees,for,this,problem| :x: 0+0| :x: 0| :x: 0/0| :white_check_mark: | :wavy_dash: 

## Environments

- gcc
	- gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

- g++
	- g++ (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

- javac
	- javac 11.0.6
- java
	- openjdk version "11.0.6" 2020-01-14
OpenJDK Runtime Environment (build 11.0.6+10-post-Ubuntu-1ubuntu118.04.1)
OpenJDK 64-Bit Server VM (build 11.0.6+10-post-Ubuntu-1ubuntu118.04.1, mixed mode, sharing)

## Error Messages

- ERROR:
	- I-Okashi/C-tsubasa-WA: Unexpectedly accepted all test cases
	- practiceA-A-plus-B/tests: validator.cpp: Compile Error (Exited Abnormally)
- WARNING:
	- B-joumon/tests: Validator unavailable
	- D-jori-bar/tests: Validator unavailable
	- E-Helping/tests: Validator unavailable
	- G-mojiretsu/tests: Validator unavailable
	- I-Okashi/tests: Validator unavailable
	- J-TATARAseitetujyo/tests: Validator unavailable

## Detail

### B: ジョウモン

testcase|in|diff|md5|C suzu AC|C suzu WA|C yamada AC|Java tsubasa AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|591B|101B|`aec06aa`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test0|416B|74B|`cc65b1c`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.24s|
random test1|822B|140B|`c259bea`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.20s|
random test2|1977B|338B|`453ffcd`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.20s|
random test3|385B|67B|`817209f`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.15s|
random test4|1212B|206B|`e1c6a58`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.13s|
random test5|933B|162B|`427dc01`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.13s|
random test6|309B|51B|`77b881d`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.12s|
random test7|899B|152B|`61792f3`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.15s|
random test8|488B|85B|`97cd1ea`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.15s|
random test9|2006B|342B|`412c4a8`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.01s| :white_check_mark: 0.25s|
sample|22B|7B|`be00837`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.15s|
small|24B|7B|`332558a`| :white_check_mark: 0.01s| :x: Wrong Answer| :white_check_mark: 0.02s| :white_check_mark: 0.23s|

### C: ロボットシミュレーション

testcase|in|diff|md5|C reiya AC|C yamada AC|Java tsubasa AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---
large|17748B|432B|`96d92fa`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.23s|
random test0|17339B|424B|`766770a`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.23s|
random test1|17178B|420B|`6561822`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.22s|
random test2|17655B|414B|`f20e6cc`| :white_check_mark: 0.01s| :white_check_mark: 0.02s| :white_check_mark: 0.20s|
random test3|17711B|426B|`da92a82`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.19s|
random test4|19442B|429B|`4cd29c1`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.24s|
random test5|17419B|413B|`99a1f61`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.20s|
random test6|17353B|417B|`2a9e84e`| :white_check_mark: 0.01s| :white_check_mark: 0.02s| :white_check_mark: 0.21s|
random test7|15978B|412B|`3f51ed4`| :white_check_mark: 0.01s| :white_check_mark: 0.02s| :white_check_mark: 0.21s|
random test8|17088B|421B|`638a857`| :white_check_mark: 0.01s| :white_check_mark: 0.02s| :white_check_mark: 0.20s|
random test9|17108B|440B|`51436f4`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.21s|
small|46B|15B|`f9c6dd8`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.13s|

### D: ジョウリバー

testcase|in|diff|md5|C kumachan AC|C yamada AC|Java tsubasa AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---
large|1174B|582B|`452197b`| :white_check_mark: 0.01s| :white_check_mark: 0.02s| :white_check_mark: 0.14s|
random test0|1188B|588B|`2c6521f`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.15s|
random test1|1178B|581B|`046602e`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.13s|
random test2|1170B|587B|`0b21e87`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.16s|
random test3|1178B|588B|`18a600f`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.16s|
random test4|1180B|588B|`40f0be7`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test5|1181B|591B|`674c796`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test6|1186B|590B|`e75e5d5`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test7|1172B|582B|`87fc68b`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.13s|
random test8|1183B|593B|`42519bb`| :white_check_mark: 0.01s| :white_check_mark: 0.02s| :white_check_mark: 0.13s|
random test9|1176B|586B|`af03b43`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.13s|
small|64B|30B|`f1f101f`| :white_check_mark: 0.01s| :white_check_mark: 0.01s| :white_check_mark: 0.15s|

### E: 人助け

testcase|in|diff|md5|C yamada AC|Java tsubasa AC|c tsubasa ac|Comments
|:---|:---|:---|:---|:---|:---|:---|:---
large|43465B|473B|`0555efa`| :white_check_mark: 0.02s| :white_check_mark: 0.27s| :white_check_mark: 0.01s|
medium|11070B|240B|`edd4faa`| :white_check_mark: 0.01s| :white_check_mark: 0.18s| :white_check_mark: 0.02s|
random test0|44053B|474B|`a0d4a77`| :white_check_mark: 0.01s| :white_check_mark: 0.23s| :white_check_mark: 0.02s|
random test1|44506B|469B|`d24ebc1`| :white_check_mark: 0.01s| :white_check_mark: 0.24s| :white_check_mark: 0.01s|
random test2|44301B|471B|`4c8e892`| :white_check_mark: 0.02s| :white_check_mark: 0.23s| :white_check_mark: 0.01s|
random test3|43908B|478B|`3db14e9`| :white_check_mark: 0.02s| :white_check_mark: 0.23s| :white_check_mark: 0.01s|
random test4|44642B|478B|`1d154f7`| :white_check_mark: 0.02s| :white_check_mark: 0.28s| :white_check_mark: 0.01s|
random test5|44557B|483B|`aa4323c`| :white_check_mark: 0.02s| :white_check_mark: 0.24s| :white_check_mark: 0.01s|
random test6|44459B|471B|`4c83547`| :white_check_mark: 0.01s| :white_check_mark: 0.24s| :white_check_mark: 0.01s|
random test7|44225B|478B|`be2c85c`| :white_check_mark: 0.01s| :white_check_mark: 0.24s| :white_check_mark: 0.01s|
random test8|43064B|471B|`82549e9`| :white_check_mark: 0.01s| :white_check_mark: 0.23s| :white_check_mark: 0.01s|
random test9|43427B|473B|`8b68cd3`| :white_check_mark: 0.01s| :white_check_mark: 0.20s| :white_check_mark: 0.01s|
sample|35B|9B|`452d059`| :white_check_mark: 0.01s| :white_check_mark: 0.12s| :white_check_mark: 0.01s|
small|206B|25B|`fcb4368`| :white_check_mark: 0.01s| :white_check_mark: 0.12s| :white_check_mark: 0.01s|

### F: JANKEN

testcase|in|diff|md5|C yamada AC|Java tsubasa AC|c tsubasa ac|Comments
|:---|:---|:---|:---|:---|:---|:---|:---
large|89132B|920B|`13a620f`| :white_check_mark: 0.02s| :white_check_mark: 0.37s| :white_check_mark: 0.02s|
medium|7645B|417B|`67c607b`| :white_check_mark: 0.01s| :white_check_mark: 0.23s| :white_check_mark: 0.02s|
random test0|91480B|924B|`68be168`| :white_check_mark: 0.02s| :white_check_mark: 0.36s| :white_check_mark: 0.02s|
random test1|87060B|913B|`b243437`| :white_check_mark: 0.02s| :white_check_mark: 0.31s| :white_check_mark: 0.02s|
random test2|91572B|926B|`87ae5d3`| :white_check_mark: 0.02s| :white_check_mark: 0.30s| :white_check_mark: 0.02s|
random test3|91784B|922B|`67b7e7c`| :white_check_mark: 0.02s| :white_check_mark: 0.31s| :white_check_mark: 0.02s|
random test4|89700B|928B|`c5fbb61`| :white_check_mark: 0.02s| :white_check_mark: 0.33s| :white_check_mark: 0.02s|
random test5|90660B|919B|`64f1680`| :white_check_mark: 0.02s| :white_check_mark: 0.37s| :white_check_mark: 0.02s|
random test6|92384B|923B|`63fc253`| :white_check_mark: 0.02s| :white_check_mark: 0.33s| :white_check_mark: 0.02s|
random test7|91204B|917B|`7c9c996`| :white_check_mark: 0.02s| :white_check_mark: 0.40s| :white_check_mark: 0.02s|
random test8|90176B|920B|`e534f4c`| :white_check_mark: 0.02s| :white_check_mark: 0.33s| :white_check_mark: 0.02s|
random test9|88136B|915B|`525d303`| :white_check_mark: 0.02s| :white_check_mark: 0.33s| :white_check_mark: 0.02s|
sample|38B|12B|`db94f09`| :white_check_mark: 0.01s| :white_check_mark: 0.18s| :white_check_mark: 0.01s|
small|153B|30B|`dc85695`| :white_check_mark: 0.01s| :white_check_mark: 0.21s| :white_check_mark: 0.01s|

### G: 文字列の問題

testcase|in|diff|md5|C yamada AC|Java tsubasa AC|Comments
|:---|:---|:---|:---|:---|:---|:---
large|2992B|353B|`5e8017a`| :white_check_mark: 0.01s| :white_check_mark: 0.16s|
random test0|2928B|355B|`6c8acda`| :white_check_mark: 0.01s| :white_check_mark: 0.17s|
random test1|3010B|351B|`33c9dc4`| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test2|3180B|351B|`19f9305`| :white_check_mark: 0.01s| :white_check_mark: 0.15s|
random test3|3084B|356B|`cc8144a`| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test4|3223B|355B|`ec55d67`| :white_check_mark: 0.01s| :white_check_mark: 0.17s|
random test5|3131B|346B|`eee9a3b`| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test6|3019B|358B|`486f66e`| :white_check_mark: 0.01s| :white_check_mark: 0.15s|
random test7|3014B|343B|`599f96e`| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test8|2890B|351B|`58b7af1`| :white_check_mark: 0.01s| :white_check_mark: 0.14s|
random test9|3236B|353B|`a007add`| :white_check_mark: 0.01s| :white_check_mark: 0.18s|
sample|42B|18B|`c6bbbe8`| :white_check_mark: 0.01s| :white_check_mark: 0.13s|
small|101B|35B|`a808aa7`| :white_check_mark: 0.01s| :white_check_mark: 0.13s|

### H: 履修登録

testcase|in|diff|md5|C yamada AC|Java tsubasa AC|Java tsubasa ACver2|c shiro ac|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|2112B|244B|`a3e0b90`| :white_check_mark: 0.02s| :white_check_mark: 0.45s| :white_check_mark: 0.22s| :white_check_mark: 0.02s|
medium|698B|117B|`3684e38`| :white_check_mark: 0.02s| :white_check_mark: 0.22s| :white_check_mark: 0.14s| :white_check_mark: 0.01s|
random test0|1512B|233B|`8cfc4ad`| :white_check_mark: 0.02s| :white_check_mark: 0.24s| :white_check_mark: 0.20s| :white_check_mark: 0.01s|
random test1|1414B|223B|`a708652`| :white_check_mark: 0.02s| :white_check_mark: 0.19s| :white_check_mark: 0.21s| :white_check_mark: 0.02s|
random test2|1440B|232B|`cfd8375`| :white_check_mark: 0.02s| :white_check_mark: 0.19s| :white_check_mark: 0.25s| :white_check_mark: 0.02s|
random test3|1329B|228B|`c51d820`| :white_check_mark: 0.02s| :white_check_mark: 0.17s| :white_check_mark: 0.23s| :white_check_mark: 0.02s|
random test4|1290B|229B|`184a8ae`| :white_check_mark: 0.02s| :white_check_mark: 0.45s| :white_check_mark: 0.21s| :white_check_mark: 0.02s|
random test5|1476B|229B|`eb793cd`| :white_check_mark: 0.02s| :white_check_mark: 0.25s| :white_check_mark: 0.20s| :white_check_mark: 0.01s|
random test6|1447B|231B|`7c30ed7`| :white_check_mark: 0.02s| :white_check_mark: 0.22s| :white_check_mark: 0.16s| :white_check_mark: 0.02s|
random test7|1486B|225B|`3e0fcf7`| :white_check_mark: 0.02s| :white_check_mark: 0.21s| :white_check_mark: 0.17s| :white_check_mark: 0.02s|
random test8|1337B|228B|`4b1e222`| :white_check_mark: 0.01s| :white_check_mark: 0.21s| :white_check_mark: 0.17s| :white_check_mark: 0.02s|
random test9|1435B|225B|`115f741`| :white_check_mark: 0.01s| :white_check_mark: 0.17s| :white_check_mark: 0.19s| :white_check_mark: 0.01s|
sample|30B|5B|`812531d`| :white_check_mark: 0.02s| :white_check_mark: 0.13s| :white_check_mark: 0.13s| :white_check_mark: 0.01s|
small|76B|22B|`d96095a`| :white_check_mark: 0.02s| :white_check_mark: 0.16s| :white_check_mark: 0.15s| :white_check_mark: 0.01s|

### I: おかし

testcase|in|diff|md5|C tsubasa AC|C tsubasa TLERE|C tsubasa WA|CPP yamada AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---
hand1|14B|3B|`2fa0793`| :white_check_mark: 0.01s| :white_check_mark: 0.02s| :white_check_mark: 0.01s| :white_check_mark: 0.02s|
large|27159B|1888B|`4e7067d`| :white_check_mark: 0.39s| :x: Runtime Error| :white_check_mark: 0.04s| :white_check_mark: 0.11s|
random test0|28107B|1885B|`8f4894f`| :white_check_mark: 0.56s| :x: Runtime Error| :white_check_mark: 0.04s| :white_check_mark: 0.13s|
random test1|26361B|1888B|`823df8a`| :white_check_mark: 0.41s| :x: Runtime Error| :white_check_mark: 0.04s| :white_check_mark: 0.10s|
random test2|27672B|1888B|`c2963ab`| :white_check_mark: 0.49s| :x: Runtime Error| :white_check_mark: 0.04s| :white_check_mark: 0.13s|
random test3|25177B|1891B|`8419f28`| :white_check_mark: 0.43s| :x: Runtime Error| :white_check_mark: 0.04s| :white_check_mark: 0.13s|
random test4|29296B|1890B|`95f8562`| :white_check_mark: 0.43s| :x: Runtime Error| :white_check_mark: 0.04s| :white_check_mark: 0.12s|
random test5|28665B|1881B|`4a960e7`| :white_check_mark: 0.48s| :x: Runtime Error| :white_check_mark: 0.04s| :white_check_mark: 0.14s|
random test6|27671B|1890B|`9aaa67b`| :white_check_mark: 0.46s| :x: Runtime Error| :white_check_mark: 0.03s| :white_check_mark: 0.14s|
random test7|26354B|1893B|`6c63f5d`| :white_check_mark: 0.41s| :x: Runtime Error| :white_check_mark: 0.03s| :white_check_mark: 0.11s|
random test8|27680B|1892B|`00fb3d6`| :white_check_mark: 0.40s| :x: Runtime Error| :white_check_mark: 0.03s| :white_check_mark: 0.11s|
random test9|25499B|1884B|`39ea08b`| :white_check_mark: 0.43s| :x: Runtime Error| :white_check_mark: 0.03s| :white_check_mark: 0.10s|
sample|66B|30B|`b6f745d`| :white_check_mark: 0.01s| :x: Runtime Error| :white_check_mark: 0.01s| :white_check_mark: 0.02s|
small|72B|14B|`41ed49d`| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s| :white_check_mark: 0.02s|

### J: タタラ製鉄所

testcase|in|diff|md5|cpp shiro ac|Comments
|:---|:---|:---|:---|:---|:---
sample|347B|14B|`489f523`| :white_check_mark: 0.02s|

### X: A + B

testcase|in|diff|md5|Comments
|:---|:---|:---|:---|:---

