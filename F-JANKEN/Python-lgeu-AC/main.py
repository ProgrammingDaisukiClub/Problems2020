#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        Y = list(map(int, input().split()))
        K = list(map(int, input().split()))
        ans = [0, 0, 0]
        for y, k in zip(Y, K):
            ans[(k-y+2)%3] += 1
        print(*ans)

if __name__ == '__main__':
    main()