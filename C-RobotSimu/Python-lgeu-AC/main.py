#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        X = list(map(int, input().split()))
        print(sum(X))

if __name__ == '__main__':
    main()