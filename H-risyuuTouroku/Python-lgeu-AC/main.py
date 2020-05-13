#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    from itertools import combinations
    T = int(input())
    for _ in range(T):
        N, K, X = map(int, input().split())
        A = list(map(int, input().split()))
        popularities = []
        for A_subset in combinations(A, K):
            popularities.append(sum(A_subset))
        popularities.sort(reverse=True)
        print(popularities[X-1])
if __name__ == '__main__':
    main()