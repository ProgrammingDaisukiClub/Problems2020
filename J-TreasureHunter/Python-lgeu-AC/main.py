#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    from heapq import heappush, heappop
    T = int(input())
    for _ in range(T):
        N, M = map(int, input().split())
        A = list(map(int, input().split()))
        x, *A = sorted(A)
        min_distance = [(v - M - 1) % x + M + 1 for v in range(x)]
        min_distance[0] = 0
        q = [(0, 0)]
        while q:
            dist, v = heappop(q)
            if min_distance[v] < dist:
                continue
            for a in A:
                u = (v + a) % x
                new_dist = dist + a
                if min_distance[u] > new_dist:
                    min_distance[u] = new_dist
                    heappush(q, (new_dist, u))
        ans = sum(d // x for d in min_distance)
        print(ans)
if __name__ == '__main__':
    main()