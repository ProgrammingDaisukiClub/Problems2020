#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    T = int(input())
    for _ in range(T):
        N, K = map(int, input().split())
        ans = N
        while N >= K:
            n_exchange = N // K
            N -= n_exchange * (K-1)
            ans += n_exchange
        print(ans)

if __name__ == '__main__':
    main()