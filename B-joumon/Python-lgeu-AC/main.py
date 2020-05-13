#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    T = int(input())
    for _ in range(T):
        D, W, A = map(int, input().split())
        print("No" if D==W*A else "Yes")

if __name__ == '__main__':
    main()