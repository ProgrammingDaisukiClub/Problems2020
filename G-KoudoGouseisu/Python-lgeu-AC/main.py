#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    T = int(input())
    for _ in range(T):
        N = int(input())
        S = input()
        print("Yes" if "2520" in S else "No")
if __name__ == '__main__':
    main()