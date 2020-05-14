#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    T = int(input())
    for _ in range(T):
        K = int(input())
        A = [0] + list(map(int, input().split()))
        N = int(input())
        ans = "wa-i"
        for _ in range(N):
            b = int(input())
            A[b] -= 1
            if A[b] < 0:
                ans = "e-n"
        print(ans)

if __name__ == '__main__':
    main()