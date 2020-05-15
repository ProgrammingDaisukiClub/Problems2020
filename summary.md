# Project Status

このファイルは markdownify_full plugin により自動生成されています (rev.4baf226 update solution for problem J, uploaded by emtsubasa @ DESKTOP-K8H6ARU)

## Summary

問題|担当|解答|入力|出力|入検|出検
:---|:---|:---|:---|:---|:---|:---
A: A times B|toma| :large_blue_diamond: 1+0| :white_check_mark: 12| :x: 1/1| :white_check_mark: | :wavy_dash: 
B: ジョウモン|suzu,shiro| :white_check_mark: 4+1| :white_check_mark: 13| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
C: ロボットシミュレーション|reiya,suzu| :white_check_mark: 4+1| :white_check_mark: 12| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
D: ジョウリバー|kumachan,tsubasa| :white_check_mark: 4+0| :white_check_mark: 13| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
E: 人助け|tsubasa,kumachan| :white_check_mark: 5+1| :white_check_mark: 13| :white_check_mark: 5/5| :white_check_mark: | :wavy_dash: 
F: JANKEN|tsubasa,reiya| :white_check_mark: 4+0| :white_check_mark: 13| :white_check_mark: 4/4| :white_check_mark: | :wavy_dash: 
G: 高度合成数|yamad,tsubasa| :white_check_mark: 3+0| :white_check_mark: 13| :white_check_mark: 3/3| :white_check_mark: | :wavy_dash: 
H: 履修登録|shiro,yamad| :white_check_mark: 5+0| :white_check_mark: 13| :white_check_mark: 5/5| :white_check_mark: | :wavy_dash: 
I: タタラ製鉄所|shiro,tsubasa| :white_check_mark: 5+0| :white_check_mark: 13| :white_check_mark: 5/5| :white_check_mark: | :wavy_dash: 
J: トレジャーハンター|yamad,tsubasa| :white_check_mark: 7+6| :white_check_mark: 20| :white_check_mark: 7/7| :white_check_mark: | :wavy_dash: 
PracA: A + B|toma| :large_blue_diamond: 1+0| :white_check_mark: 12| :x: 1/1| :white_check_mark: | :wavy_dash: 

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

## Detail

### A: A times B

testcase|in|diff|md5|C toma AC|Comments
|:---|:---|:---|:---|:---|:---
large|523B|418B|`1aec8df`| :white_check_mark: 0.02s|
random test0|525B|424B|`710ee75`| :white_check_mark: 0.04s|
random test1|531B|432B|`16059e7`| :white_check_mark: 0.05s|
random test2|534B|438B|`39c538f`| :white_check_mark: 0.03s|
random test3|546B|429B|`661c99b`| :white_check_mark: 0.05s|
random test4|530B|423B|`aab5fe5`| :white_check_mark: 0.05s|
random test5|531B|432B|`1d7d487`| :white_check_mark: 0.06s|
random test6|530B|424B|`5a6d2dd`| :white_check_mark: 0.03s|
random test7|526B|418B|`b0b6554`| :white_check_mark: 0.04s|
random test8|526B|424B|`3fe82b9`| :white_check_mark: 0.06s|
random test9|529B|430B|`ec01acf`| :white_check_mark: 0.03s|
small|93B|68B|`802fa8b`| :white_check_mark: 0.08s|

### B: ジョウモン

testcase|in|diff|md5|C suzu AC|C suzu WA|C yamada AC|Java tsubasa AC|Python lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|2051B|351B|`5f3a99a`| :white_check_mark: 0.10s| :x: Wrong Answer| :white_check_mark: 0.07s| :white_check_mark: 0.49s| :white_check_mark: 0.13s|
random test0|492B|84B|`88769db`| :white_check_mark: 0.09s| :x: Wrong Answer| :white_check_mark: 0.21s| :white_check_mark: 0.53s| :white_check_mark: 0.11s|
random test1|501B|86B|`541b65d`| :white_check_mark: 0.09s| :x: Wrong Answer| :white_check_mark: 0.22s| :white_check_mark: 0.48s| :white_check_mark: 0.14s|
random test2|1821B|306B|`d9f58f6`| :white_check_mark: 0.04s| :x: Wrong Answer| :white_check_mark: 0.07s| :white_check_mark: 0.70s| :white_check_mark: 0.19s|
random test3|1431B|245B|`32e4430`| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.85s| :white_check_mark: 0.13s|
random test4|390B|67B|`46ec9b9`| :white_check_mark: 0.05s| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 0.78s| :white_check_mark: 0.12s|
random test5|1261B|215B|`c1fd08b`| :white_check_mark: 0.07s| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 0.79s| :white_check_mark: 0.15s|
random test6|1825B|309B|`ca7e2ea`| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.80s| :white_check_mark: 0.14s|
random test7|329B|56B|`5732180`| :white_check_mark: 0.03s| :x: Wrong Answer| :white_check_mark: 0.03s| :white_check_mark: 0.87s| :white_check_mark: 0.15s|
random test8|948B|158B|`28bed0a`| :white_check_mark: 0.28s| :x: Wrong Answer| :white_check_mark: 0.11s| :white_check_mark: 0.85s| :white_check_mark: 0.15s|
random test9|1229B|210B|`872ae88`| :white_check_mark: 0.17s| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 0.63s| :white_check_mark: 0.16s|
sample|23B|7B|`d7aa2e1`| :white_check_mark: 0.08s| :x: Wrong Answer| :white_check_mark: 0.15s| :white_check_mark: 0.54s| :white_check_mark: 0.10s|
small|108B|36B|`c33b35f`| :white_check_mark: 0.06s| :x: Wrong Answer| :white_check_mark: 0.14s| :white_check_mark: 0.51s| :white_check_mark: 0.13s|

### C: ロボットシミュレーション

testcase|in|diff|md5|C reiya AC|C reiya small AC|C yamada AC|Java tsubasa AC|Python lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|17748B|432B|`96d92fa`| :white_check_mark: 0.30s| :x: Wrong Answer| :white_check_mark: 0.28s| :white_check_mark: 1.53s| :white_check_mark: 0.16s|
random test0|17339B|424B|`766770a`| :white_check_mark: 0.23s| :x: Wrong Answer| :white_check_mark: 0.20s| :white_check_mark: 1.16s| :white_check_mark: 0.13s|
random test1|17178B|420B|`6561822`| :white_check_mark: 0.17s| :x: Wrong Answer| :white_check_mark: 0.10s| :white_check_mark: 1.15s| :white_check_mark: 0.15s|
random test2|17655B|414B|`f20e6cc`| :white_check_mark: 0.08s| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 1.86s| :white_check_mark: 0.16s|
random test3|17711B|426B|`da92a82`| :white_check_mark: 0.09s| :x: Wrong Answer| :white_check_mark: 0.05s| :white_check_mark: 1.85s| :white_check_mark: 0.11s|
random test4|19442B|429B|`4cd29c1`| :white_check_mark: 0.06s| :x: Wrong Answer| :white_check_mark: 0.09s| :white_check_mark: 1.79s| :white_check_mark: 0.14s|
random test5|17419B|413B|`99a1f61`| :white_check_mark: 0.11s| :x: Wrong Answer| :white_check_mark: 0.05s| :white_check_mark: 1.71s| :white_check_mark: 0.18s|
random test6|17353B|417B|`2a9e84e`| :white_check_mark: 0.10s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 1.05s| :white_check_mark: 0.21s|
random test7|15978B|412B|`3f51ed4`| :white_check_mark: 0.07s| :x: Wrong Answer| :white_check_mark: 0.10s| :white_check_mark: 1.39s| :white_check_mark: 0.16s|
random test8|17088B|421B|`638a857`| :white_check_mark: 0.11s| :x: Wrong Answer| :white_check_mark: 0.05s| :white_check_mark: 1.38s| :white_check_mark: 0.24s|
random test9|17108B|440B|`51436f4`| :white_check_mark: 0.05s| :x: Wrong Answer| :white_check_mark: 0.07s| :white_check_mark: 1.35s| :white_check_mark: 0.22s|
small|46B|15B|`f9c6dd8`| :white_check_mark: 0.06s| :white_check_mark: 0.20s| :white_check_mark: 0.13s| :white_check_mark: 0.88s| :white_check_mark: 0.18s|

### D: ジョウリバー

testcase|in|diff|md5|C kumachan AC|C yamada AC|Java tsubasa AC|Python lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|1174B|582B|`452197b`| :white_check_mark: 0.10s| :white_check_mark: 0.09s| :white_check_mark: 0.78s| :white_check_mark: 0.13s|
random test0|1188B|588B|`2c6521f`| :white_check_mark: 1.04s| :white_check_mark: 0.10s| :white_check_mark: 0.77s| :white_check_mark: 0.14s|
random test1|1178B|581B|`046602e`| :white_check_mark: 0.10s| :white_check_mark: 0.14s| :white_check_mark: 0.60s| :white_check_mark: 0.14s|
random test2|1170B|587B|`0b21e87`| :white_check_mark: 0.11s| :white_check_mark: 0.16s| :white_check_mark: 0.67s| :white_check_mark: 0.14s|
random test3|1178B|588B|`18a600f`| :white_check_mark: 0.07s| :white_check_mark: 0.08s| :white_check_mark: 0.85s| :white_check_mark: 0.15s|
random test4|1180B|588B|`40f0be7`| :white_check_mark: 0.05s| :white_check_mark: 0.12s| :white_check_mark: 0.74s| :white_check_mark: 0.15s|
random test5|1181B|591B|`674c796`| :white_check_mark: 0.05s| :white_check_mark: 0.08s| :white_check_mark: 0.65s| :white_check_mark: 0.15s|
random test6|1186B|590B|`e75e5d5`| :white_check_mark: 0.10s| :white_check_mark: 0.13s| :white_check_mark: 0.61s| :white_check_mark: 0.12s|
random test7|1172B|582B|`87fc68b`| :white_check_mark: 0.09s| :white_check_mark: 0.12s| :white_check_mark: 0.87s| :white_check_mark: 0.14s|
random test8|1183B|593B|`42519bb`| :white_check_mark: 0.08s| :white_check_mark: 0.12s| :white_check_mark: 0.77s| :white_check_mark: 0.16s|
random test9|1176B|586B|`af03b43`| :white_check_mark: 0.03s| :white_check_mark: 0.12s| :white_check_mark: 0.51s| :white_check_mark: 0.15s|
sample|11B|5B|`1d53fdc`| :white_check_mark: 0.03s| :white_check_mark: 0.10s| :white_check_mark: 0.55s| :white_check_mark: 0.11s|
small|64B|30B|`f1f101f`| :white_check_mark: 0.10s| :white_check_mark: 0.06s| :white_check_mark: 0.50s| :white_check_mark: 0.12s|

### E: 人助け

testcase|in|diff|md5|C yamada AC|Cpp kumachan ac|Java tsubasa AC|Python lgeu RE|Python tsubasa AC|c tsubasa ac|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|45363B|434B|`526b8e6`| :white_check_mark: 0.07s| :white_check_mark: 0.08s| :white_check_mark: 1.56s| :x: Runtime Error| :white_check_mark: 0.13s| :white_check_mark: 0.08s|
random test0|44044B|435B|`7e5d674`| :white_check_mark: 0.07s| :white_check_mark: 0.06s| :white_check_mark: 1.41s| :x: Runtime Error| :white_check_mark: 0.15s| :white_check_mark: 0.05s|
random test1|43503B|427B|`dac5e16`| :white_check_mark: 0.04s| :white_check_mark: 0.07s| :white_check_mark: 1.32s| :x: Runtime Error| :white_check_mark: 0.12s| :white_check_mark: 0.10s|
random test2|43538B|437B|`00b51b1`| :white_check_mark: 0.04s| :white_check_mark: 0.16s| :white_check_mark: 1.35s| :x: Runtime Error| :white_check_mark: 0.16s| :white_check_mark: 0.05s|
random test3|42736B|439B|`2e7c42a`| :white_check_mark: 0.23s| :white_check_mark: 0.09s| :white_check_mark: 0.72s| :x: Runtime Error| :white_check_mark: 0.14s| :white_check_mark: 0.13s|
random test4|44759B|444B|`52a1647`| :white_check_mark: 0.09s| :white_check_mark: 0.09s| :white_check_mark: 1.50s| :x: Runtime Error| :white_check_mark: 0.12s| :white_check_mark: 0.05s|
random test5|44769B|437B|`733f4c5`| :white_check_mark: 0.07s| :white_check_mark: 0.05s| :white_check_mark: 1.47s| :x: Runtime Error| :white_check_mark: 0.15s| :white_check_mark: 0.10s|
random test6|43077B|443B|`46dbaff`| :white_check_mark: 0.07s| :white_check_mark: 0.05s| :white_check_mark: 1.57s| :x: Runtime Error| :white_check_mark: 0.14s| :white_check_mark: 0.10s|
random test7|44842B|439B|`4248e7a`| :white_check_mark: 0.15s| :white_check_mark: 0.04s| :white_check_mark: 0.92s| :x: Runtime Error| :white_check_mark: 0.12s| :white_check_mark: 0.05s|
random test8|43554B|442B|`aeb589e`| :white_check_mark: 0.07s| :white_check_mark: 0.06s| :white_check_mark: 1.10s| :x: Runtime Error| :white_check_mark: 0.13s| :white_check_mark: 0.09s|
random test9|44231B|437B|`a5002f5`| :white_check_mark: 0.12s| :white_check_mark: 0.08s| :white_check_mark: 1.21s| :x: Runtime Error| :white_check_mark: 0.14s| :white_check_mark: 0.11s|
sample|36B|9B|`cb9d799`| :white_check_mark: 0.07s| :white_check_mark: 0.05s| :white_check_mark: 0.32s| :x: Runtime Error| :white_check_mark: 0.11s| :white_check_mark: 0.06s|
small|195B|23B|`42ef914`| :white_check_mark: 0.06s| :white_check_mark: 0.10s| :white_check_mark: 0.38s| :x: Runtime Error| :white_check_mark: 0.12s| :white_check_mark: 0.03s|

### F: JANKEN

testcase|in|diff|md5|C yamada AC|Java tsubasa AC|Python lgeu AC|c tsubasa ac|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|90456B|914B|`06372ad`| :white_check_mark: 0.06s| :white_check_mark: 2.39s| :white_check_mark: 0.19s| :white_check_mark: 0.08s|
random test0|88520B|918B|`b2a51d0`| :white_check_mark: 0.06s| :white_check_mark: 2.60s| :white_check_mark: 0.17s| :white_check_mark: 0.05s|
random test1|90996B|919B|`50f2f50`| :white_check_mark: 0.10s| :white_check_mark: 2.48s| :white_check_mark: 0.22s| :white_check_mark: 0.11s|
random test2|92264B|926B|`3e12f91`| :white_check_mark: 0.06s| :white_check_mark: 2.16s| :white_check_mark: 0.16s| :white_check_mark: 0.06s|
random test3|90364B|922B|`dce05bd`| :white_check_mark: 0.35s| :white_check_mark: 2.09s| :white_check_mark: 0.13s| :white_check_mark: 0.09s|
random test4|89532B|926B|`0c999eb`| :white_check_mark: 0.14s| :white_check_mark: 2.19s| :white_check_mark: 0.14s| :white_check_mark: 0.11s|
random test5|91812B|921B|`85b23ee`| :white_check_mark: 0.15s| :white_check_mark: 2.10s| :white_check_mark: 0.15s| :white_check_mark: 0.07s|
random test6|91724B|921B|`24db118`| :white_check_mark: 0.17s| :white_check_mark: 1.59s| :white_check_mark: 0.13s| :white_check_mark: 0.09s|
random test7|90936B|918B|`2b9d0dc`| :white_check_mark: 0.11s| :white_check_mark: 1.68s| :white_check_mark: 0.16s| :white_check_mark: 0.04s|
random test8|91328B|920B|`99f2837`| :white_check_mark: 0.07s| :white_check_mark: 1.69s| :white_check_mark: 0.15s| :white_check_mark: 0.16s|
random test9|87744B|916B|`cd5ce25`| :white_check_mark: 0.16s| :white_check_mark: 1.60s| :white_check_mark: 0.17s| :white_check_mark: 0.09s|
sample|38B|12B|`db94f09`| :white_check_mark: 0.07s| :white_check_mark: 0.78s| :white_check_mark: 0.11s| :white_check_mark: 0.03s|
small|153B|30B|`dc85695`| :white_check_mark: 0.04s| :white_check_mark: 0.73s| :white_check_mark: 0.14s| :white_check_mark: 0.11s|

### G: 高度合成数

testcase|in|diff|md5|C yamada AC|Java tsubasa AC|Python lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---
large|30436B|3519B|`94383bf`| :white_check_mark: 0.04s| :white_check_mark: 1.10s| :white_check_mark: 0.14s|
random test0|29932B|3527B|`bc1117c`| :white_check_mark: 0.03s| :white_check_mark: 1.02s| :white_check_mark: 0.15s|
random test1|29885B|3520B|`90a0000`| :white_check_mark: 0.04s| :white_check_mark: 1.01s| :white_check_mark: 0.19s|
random test2|29642B|3486B|`ffa0938`| :white_check_mark: 0.05s| :white_check_mark: 1.02s| :white_check_mark: 0.20s|
random test3|29727B|3483B|`9e7c5e0`| :white_check_mark: 0.05s| :white_check_mark: 1.17s| :white_check_mark: 0.15s|
random test4|30149B|3531B|`70abd93`| :white_check_mark: 0.06s| :white_check_mark: 0.94s| :white_check_mark: 0.15s|
random test5|30219B|3515B|`7999012`| :white_check_mark: 0.05s| :white_check_mark: 0.81s| :white_check_mark: 0.16s|
random test6|29884B|3503B|`30ae556`| :white_check_mark: 0.06s| :white_check_mark: 0.49s| :white_check_mark: 0.12s|
random test7|30386B|3496B|`e69d57b`| :white_check_mark: 0.05s| :white_check_mark: 0.80s| :white_check_mark: 0.14s|
random test8|30417B|3492B|`61f5270`| :white_check_mark: 0.06s| :white_check_mark: 0.82s| :white_check_mark: 0.17s|
random test9|30423B|3517B|`b7c0bea`| :white_check_mark: 0.06s| :white_check_mark: 0.66s| :white_check_mark: 0.16s|
sample|42B|18B|`c6bbbe8`| :white_check_mark: 0.06s| :white_check_mark: 0.52s| :white_check_mark: 0.10s|
small|101B|35B|`a808aa7`| :white_check_mark: 0.06s| :white_check_mark: 0.61s| :white_check_mark: 0.12s|

### H: 履修登録

testcase|in|diff|md5|C yamada AC|Java tsubasa AC|Java tsubasa ACver2|Python lgeu AC|c shiro ac|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|2092B|243B|`a82f38a`| :white_check_mark: 0.10s| :white_check_mark: 0.81s| :white_check_mark: 0.66s| :white_check_mark: 0.19s| :white_check_mark: 0.04s|
random test0|1487B|230B|`7991818`| :white_check_mark: 0.08s| :white_check_mark: 0.78s| :white_check_mark: 0.54s| :white_check_mark: 0.14s| :white_check_mark: 0.08s|
random test1|1496B|228B|`be1e6f2`| :white_check_mark: 0.05s| :white_check_mark: 0.70s| :white_check_mark: 0.57s| :white_check_mark: 0.22s| :white_check_mark: 0.04s|
random test2|1448B|230B|`6d3412d`| :white_check_mark: 0.10s| :white_check_mark: 0.66s| :white_check_mark: 0.54s| :white_check_mark: 0.23s| :white_check_mark: 0.13s|
random test3|1399B|229B|`f509c6d`| :white_check_mark: 0.05s| :white_check_mark: 0.63s| :white_check_mark: 0.54s| :white_check_mark: 0.17s| :white_check_mark: 0.12s|
random test4|1228B|229B|`ea8c661`| :white_check_mark: 0.11s| :white_check_mark: 0.56s| :white_check_mark: 0.69s| :white_check_mark: 0.21s| :white_check_mark: 0.03s|
random test5|1445B|228B|`dbcdd59`| :white_check_mark: 0.05s| :white_check_mark: 0.62s| :white_check_mark: 0.66s| :white_check_mark: 0.16s| :white_check_mark: 0.04s|
random test6|1405B|228B|`69735a2`| :white_check_mark: 0.03s| :white_check_mark: 0.63s| :white_check_mark: 0.55s| :white_check_mark: 0.18s| :white_check_mark: 0.04s|
random test7|1544B|227B|`8307260`| :white_check_mark: 0.09s| :white_check_mark: 0.60s| :white_check_mark: 0.53s| :white_check_mark: 0.18s| :white_check_mark: 0.05s|
random test8|1357B|233B|`678b2b6`| :white_check_mark: 0.06s| :white_check_mark: 0.57s| :white_check_mark: 0.54s| :white_check_mark: 0.21s| :white_check_mark: 0.04s|
random test9|1332B|222B|`921977f`| :white_check_mark: 0.05s| :white_check_mark: 0.44s| :white_check_mark: 0.60s| :white_check_mark: 0.13s| :white_check_mark: 0.06s|
sample|30B|5B|`812531d`| :white_check_mark: 0.10s| :white_check_mark: 0.45s| :white_check_mark: 0.48s| :white_check_mark: 0.23s| :white_check_mark: 0.08s|
small|76B|22B|`d96095a`| :white_check_mark: 0.05s| :white_check_mark: 0.49s| :white_check_mark: 0.46s| :white_check_mark: 0.17s| :white_check_mark: 0.05s|

### I: タタラ製鉄所

testcase|in|diff|md5|CPP yamada AC|Python lgeu AC|c tsubasa ac|cpp shiro ac|java shiro ac|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
large|13064B|261B|`e1ded57`| :white_check_mark: 0.06s| :white_check_mark: 0.23s| :white_check_mark: 0.13s| :white_check_mark: 0.08s| :white_check_mark: 0.32s|
random test0|11113B|466B|`62d883d`| :white_check_mark: 0.06s| :white_check_mark: 0.55s| :white_check_mark: 0.10s| :white_check_mark: 0.13s| :white_check_mark: 0.43s|
random test1|10569B|502B|`c139f33`| :white_check_mark: 0.09s| :white_check_mark: 0.30s| :white_check_mark: 0.10s| :white_check_mark: 0.07s| :white_check_mark: 0.49s|
random test2|13079B|501B|`05f36c6`| :white_check_mark: 0.06s| :white_check_mark: 0.23s| :white_check_mark: 0.13s| :white_check_mark: 0.06s| :white_check_mark: 0.49s|
random test3|11544B|502B|`b3d9a55`| :white_check_mark: 0.09s| :white_check_mark: 0.22s| :white_check_mark: 0.12s| :white_check_mark: 0.04s| :white_check_mark: 0.58s|
random test4|14407B|558B|`741706b`| :white_check_mark: 0.14s| :white_check_mark: 0.18s| :white_check_mark: 0.10s| :white_check_mark: 0.03s| :white_check_mark: 0.56s|
random test5|12502B|488B|`c6ee3f8`| :white_check_mark: 0.04s| :white_check_mark: 0.26s| :white_check_mark: 0.17s| :white_check_mark: 0.03s| :white_check_mark: 0.59s|
random test6|11566B|508B|`d6fb12a`| :white_check_mark: 0.05s| :white_check_mark: 0.21s| :white_check_mark: 0.19s| :white_check_mark: 0.04s| :white_check_mark: 0.69s|
random test7|12530B|549B|`1a930b8`| :white_check_mark: 0.06s| :white_check_mark: 0.24s| :white_check_mark: 0.08s| :white_check_mark: 0.04s| :white_check_mark: 0.70s|
random test8|12841B|487B|`9146305`| :white_check_mark: 0.07s| :white_check_mark: 0.17s| :white_check_mark: 0.11s| :white_check_mark: 0.07s| :white_check_mark: 1.11s|
random test9|13236B|554B|`6dfade5`| :white_check_mark: 0.04s| :white_check_mark: 0.24s| :white_check_mark: 0.17s| :white_check_mark: 0.06s| :white_check_mark: 0.65s|
sample|48B|12B|`5a55559`| :white_check_mark: 0.09s| :white_check_mark: 0.17s| :white_check_mark: 0.10s| :white_check_mark: 0.07s| :white_check_mark: 0.31s|
small|95B|22B|`b8bf9be`| :white_check_mark: 0.05s| :white_check_mark: 0.18s| :white_check_mark: 0.07s| :white_check_mark: 0.07s| :white_check_mark: 0.53s|

### J: トレジャーハンター

testcase|in|diff|md5|C tsubasa AC|C tsubasa ACver2|C tsubasa TLERE|C tsubasa WA|C tsubasa WAver2|C yamada AC|C yamada TLE|C yamada WA|CPP imulan AC|CPP toma TLE|CPP yamada AC|Java tsubasa AC|Python lgeu AC|Comments
|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---|:---
hand1|15B|3B|`be70070`| :white_check_mark: 0.04s| :white_check_mark: 0.08s| :white_check_mark: 0.10s| :white_check_mark: 0.08s| :white_check_mark: 0.10s| :white_check_mark: 0.11s| :white_check_mark: 0.12s| :white_check_mark: 0.11s| :white_check_mark: 0.09s| :x: Wrong Answer| :white_check_mark: 0.08s| :white_check_mark: 0.62s| :white_check_mark: 0.13s|
hand2|24B|3B|`878f039`| :white_check_mark: 0.07s| :white_check_mark: 0.06s| :x: Runtime Error| :white_check_mark: 0.06s| :white_check_mark: 0.07s| :white_check_mark: 0.07s| :white_check_mark: 7.22s| :white_check_mark: 0.43s| :white_check_mark: 0.06s| :x: Wrong Answer| :white_check_mark: 0.06s| :white_check_mark: 0.55s| :white_check_mark: 0.11s|
hand3|54B|4B|`ee27040`| :white_check_mark: 0.03s| :white_check_mark: 0.04s| :white_check_mark: 0.05s| :white_check_mark: 0.04s| :white_check_mark: 0.05s| :white_check_mark: 0.05s| :white_check_mark: 0.06s| :white_check_mark: 0.06s| :white_check_mark: 0.04s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.56s| :white_check_mark: 0.15s|
hand4|43B|6B|`6260dfd`| :white_check_mark: 0.07s| :white_check_mark: 0.08s| :x: Runtime Error| :white_check_mark: 0.09s| :x: Wrong Answer| :white_check_mark: 0.09s| :white_check_mark: 20.67s| :white_check_mark: 0.55s| :white_check_mark: 0.09s| :x: Wrong Answer| :white_check_mark: 0.11s| :white_check_mark: 0.57s| :white_check_mark: 0.12s|
hand5|39B|9B|`413e069`| :white_check_mark: 0.11s| :white_check_mark: 0.05s| :x: Runtime Error| :x: Wrong Answer| :x: Wrong Answer| :white_check_mark: 0.05s| :white_check_mark: 20.98s| :white_check_mark: 0.45s| :white_check_mark: 0.05s| :x: Wrong Answer| :white_check_mark: 0.04s| :white_check_mark: 0.63s| :white_check_mark: 0.13s|
hand6|36B|10B|`af178ff`| :white_check_mark: 0.11s| :white_check_mark: 0.11s| :x: Runtime Error| :x: Wrong Answer| :white_check_mark: 0.12s| :white_check_mark: 0.10s| :white_check_mark: 13.96s| :x: Wrong Answer| :white_check_mark: 0.10s| :x: Wrong Answer| :white_check_mark: 0.13s| :white_check_mark: 0.80s| :white_check_mark: 0.14s|
large|8906B|392B|`8fcc332`| :white_check_mark: 30.03s| :white_check_mark: 1.99s| :x: Runtime Error| :white_check_mark: 15.61s| :x: Wrong Answer| :white_check_mark: 26.93s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.45s| :x: Time Limit Exceeded| :white_check_mark: 6.66s| :white_check_mark: 48.46s| :white_check_mark: 14.12s|
medium|3230B|194B|`caa502f`| :white_check_mark: 0.08s| :white_check_mark: 0.09s| :white_check_mark: 0.09s| :white_check_mark: 0.07s| :white_check_mark: 0.10s| :white_check_mark: 0.08s| :white_check_mark: 0.04s| :white_check_mark: 0.03s| :white_check_mark: 0.08s| :x: Wrong Answer| :white_check_mark: 0.09s| :white_check_mark: 0.83s| :white_check_mark: 0.14s|
random test0|9141B|386B|`b171786`| :white_check_mark: 30.27s| :white_check_mark: 1.97s| :x: Runtime Error| :white_check_mark: 16.11s| :white_check_mark: 17.62s| :white_check_mark: 27.16s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.51s| :x: Time Limit Exceeded| :white_check_mark: 6.75s| :white_check_mark: 49.31s| :white_check_mark: 14.18s|
random test1|9039B|377B|`842b63e`| :white_check_mark: 30.43s| :white_check_mark: 2.03s| :x: Runtime Error| :white_check_mark: 16.01s| :x: Wrong Answer| :white_check_mark: 27.13s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.49s| :x: Time Limit Exceeded| :white_check_mark: 6.73s| :white_check_mark: 49.20s| :white_check_mark: 14.15s|
random test2|9002B|377B|`dd992eb`| :white_check_mark: 30.27s| :white_check_mark: 1.94s| :x: Runtime Error| :white_check_mark: 15.68s| :white_check_mark: 17.45s| :white_check_mark: 27.11s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.46s| :x: Time Limit Exceeded| :white_check_mark: 6.73s| :white_check_mark: 48.96s| :white_check_mark: 14.12s|
random test3|9242B|375B|`81b73d0`| :white_check_mark: 28.86s| :white_check_mark: 1.80s| :x: Runtime Error| :white_check_mark: 17.77s| :white_check_mark: 17.44s| :white_check_mark: 28.33s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.45s| :x: Time Limit Exceeded| :white_check_mark: 6.77s| :white_check_mark: 41.51s| :white_check_mark: 13.63s|
random test4|9317B|373B|`69eb57b`| :white_check_mark: 28.72s| :white_check_mark: 1.77s| :x: Runtime Error| :white_check_mark: 17.65s| :white_check_mark: 17.29s| :white_check_mark: 28.01s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.48s| :x: Time Limit Exceeded| :white_check_mark: 6.82s| :white_check_mark: 41.55s| :white_check_mark: 13.70s|
random test5|9376B|374B|`95338f5`| :white_check_mark: 28.83s| :white_check_mark: 1.81s| :x: Runtime Error| :white_check_mark: 17.74s| :white_check_mark: 17.54s| :white_check_mark: 28.04s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.49s| :x: Time Limit Exceeded| :white_check_mark: 6.79s| :white_check_mark: 41.14s| :white_check_mark: 13.67s|
random test6|9183B|388B|`d04174e`| :white_check_mark: 28.60s| :white_check_mark: 1.81s| :x: Runtime Error| :white_check_mark: 17.46s| :x: Wrong Answer| :white_check_mark: 28.13s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.58s| :x: Time Limit Exceeded| :white_check_mark: 6.84s| :white_check_mark: 41.39s| :white_check_mark: 13.55s|
random test7|9020B|390B|`d9a12c7`| :white_check_mark: 23.51s| :white_check_mark: 1.59s| :x: Runtime Error| :white_check_mark: 12.17s| :white_check_mark: 14.75s| :white_check_mark: 24.98s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.56s| :x: Time Limit Exceeded| :white_check_mark: 5.89s| :white_check_mark: 38.44s| :white_check_mark: 14.10s|
random test8|9129B|387B|`d15ecca`| :white_check_mark: 23.45s| :white_check_mark: 1.66s| :x: Runtime Error| :white_check_mark: 12.43s| :white_check_mark: 14.61s| :white_check_mark: 25.09s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.49s| :x: Time Limit Exceeded| :white_check_mark: 5.97s| :white_check_mark: 38.04s| :white_check_mark: 13.89s|
random test9|8942B|377B|`7fc6f84`| :white_check_mark: 23.61s| :white_check_mark: 1.64s| :x: Runtime Error| :white_check_mark: 12.16s| :white_check_mark: 14.47s| :white_check_mark: 24.77s| :x: Time Limit Exceeded| :x: Time Limit Exceeded| :white_check_mark: 0.51s| :x: Time Limit Exceeded| :white_check_mark: 5.93s| :white_check_mark: 38.52s| :white_check_mark: 13.84s|
sample|74B|29B|`0f53eb2`| :white_check_mark: 0.03s| :white_check_mark: 0.03s| :x: Runtime Error| :white_check_mark: 0.07s| :white_check_mark: 0.03s| :white_check_mark: 0.03s| :white_check_mark: 4.72s| :white_check_mark: 0.41s| :white_check_mark: 0.04s| :x: Wrong Answer| :white_check_mark: 0.14s| :white_check_mark: 0.77s| :white_check_mark: 0.13s|
small|68B|10B|`da071be`| :white_check_mark: 0.03s| :white_check_mark: 0.03s| :white_check_mark: 0.02s| :white_check_mark: 0.03s| :white_check_mark: 0.03s| :white_check_mark: 0.03s| :white_check_mark: 0.06s| :white_check_mark: 0.11s| :white_check_mark: 0.07s| :x: Wrong Answer| :white_check_mark: 0.09s| :white_check_mark: 0.55s| :white_check_mark: 0.17s|

### PracA: A + B

testcase|in|diff|md5|C toma AC|Comments
|:---|:---|:---|:---|:---|:---
large|523B|263B|`1aec8df`| :white_check_mark: 0.07s|
random test0|525B|267B|`710ee75`| :white_check_mark: 0.04s|
random test1|531B|263B|`16059e7`| :white_check_mark: 0.05s|
random test2|534B|259B|`39c538f`| :white_check_mark: 0.06s|
random test3|546B|272B|`661c99b`| :white_check_mark: 0.04s|
random test4|530B|264B|`aab5fe5`| :white_check_mark: 0.03s|
random test5|531B|263B|`1d7d487`| :white_check_mark: 0.08s|
random test6|530B|270B|`5a6d2dd`| :white_check_mark: 0.06s|
random test7|526B|265B|`b0b6554`| :white_check_mark: 0.03s|
random test8|526B|263B|`3fe82b9`| :white_check_mark: 0.05s|
random test9|529B|262B|`ec01acf`| :white_check_mark: 0.07s|
small|93B|45B|`802fa8b`| :white_check_mark: 0.07s|

