#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    T = int(input())
    for _ in range(T):
        K = int(input())
        A = [0] + list(map(int, input().split()))
        N = int(input())
        B = list(map(int,input().split()))
        ans = "wa-i"
        for i in range(N):
            b = B[i]
            A[b] -= 1
            if A[b] < 0:
                ans = "e-n"
        print(ans)

if __name__ == '__main__':
    main()