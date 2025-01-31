# Description
ツバサ君は人工知能を勉強したいです。  
友人のR君に相談したところ、「がんばれ森川君2号」というゲームで人工知能を学ぶことができるよ！とアドバイスされました。  

「がんばれ森川君2号」は、ロボットに対して指示を与えることで少しずつロボットとしての知能を高めていくゲームです。  

そこで、ツバサ君はまずロボットが正しく動くことができるように、移動の指示をロボットに入力するところから始めることにしました。移動の指示では1つの整数をロボットに対して入力します。  

今から、ツバサ君はロボットに $N$ 回指示を出します。  
$i$ 回目の指示では $X_i$をロボットに入力します。  
入力された $X_i$ の値が $0$ より大きい場合、ロボットは今いるマスから前に $|X_i|$ マス前進します。  
入力された $X_i$ の値が $0$ より小さい場合、ロボットは今いるマスから後ろに $|X_i|$ マス後退します。  
入力された $X_i$ の値が $0$ の場合、ロボットは前進も後退もせず、その場に留まります。  

$N$ 回指示を出した後、ロボットは最初のマスから何マス分前に進んでいれば指示通りに動くことができているでしょうか？

# Constraints
## 共通
- 入力は全て整数である。
- $T$はテストケースの個数である。

## Small
- $T = 5$  
- $1 \leq N \leq 10$  
- $1 \leq X_i \leq 10$  
- Smallではロボットが後退する指示は入力されない。

## Large
- $T = 100$  
- $1 \leq N \leq 100$  
- $-100 \leq X_i \leq 100$  

# Input
1つの入力ファイルは複数のテストケースからなる。  
入力ファイルの最初の1行目にはテストケースの個数 $T$ が記される。  
2行目以降には $T$ 個のテストケースが記されており、各テストケースは以下の形式で記される。  
```
$N$
$X_1$ $X_2$ $X_3$ $\ldots$ $X_n$
```

# Output
各テストケースに対して、最終的なロボットの位置が、スタート地点から何マス前に進んだかを出力せよ。

# Sample Input
```
2
3
1 2 3
5
-10 23 -12 0 -4
```

# Sample Output
```
6
-3
```
1つ目のテストケースでは  
1回目の指示で1マス前に、  
2回目の指示で更に2マス前に(最初のマスから3マス分前)、  
3回目の指示で更に3マス前に(最初のマスから6マス分前)  
進むため、答えは6となります。  
2つ目のテストケースのように答えが負の数、つまり元のマスよりも後ろに後退している場合もあります。  
ただし、ロボットは前方向にも後ろ方向にも無限に進めるものとします。
