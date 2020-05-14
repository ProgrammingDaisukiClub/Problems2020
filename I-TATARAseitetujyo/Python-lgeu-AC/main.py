#!/usr/local/bin/python3
# -*- coding: utf-8 -*-
def main():
    direction = {
        "L": [(0, -1)],
        "R": [(0, 1)],
        "U": [(-1, 0)],
        "D": [(1, 0)],
        ".": [(0, -1), (0, 1), (-1, 0), (1, 0)]
    }
    T = int(input())
    for _ in range(T):
        N, M = map(int, input().split())
        G = [input() for _ in range(N)]
        queue = [(0, 0)]
        searched = [[False] * M for _ in range(N)]
        searched[0][0] = True
        ans = "kusoge-"
        time = 0
        while len(queue) > 0:
            next_queue = []
            for r, c in queue:
                if (r, c) == (N-1, M-1):
                    ans = time
                for dr, dc in direction[G[r][c]]:
                    next_r, next_c = r + dr, c + dc
                    if 0 <= next_r < N and 0 <= next_c < M and not searched[next_r][next_c]:
                        next_queue.append((next_r, next_c))
                        searched[next_r][next_c] = True
            queue = next_queue
            time += 1
        print(ans)
if __name__ == '__main__':
    main()