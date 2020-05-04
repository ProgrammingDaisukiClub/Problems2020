#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int v[1 << 21];

int compare(const void *a, const void *b) {
    if(*(int *)a > *(int *)b) {
        return -1;
    }
    if(*(int *)a < *(int *)b) {
        return 1;
    }
    return 0;
}

void solve() {
    memset(v, -1, sizeof(v));
    int n, k, x, bit, i, tail = 0;
    scanf("%d %d %d", &n, &k, &x);
    int *a;
    a = (int *)malloc(sizeof(int) * n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(bit = 0; bit < (1 << n); bit++) {
        int sum = 0;
        int pcnt = 0;
        for(i = 0; i < n; i++) {
            if(bit & (1 << i)) {
                pcnt++;
                sum += a[i];
            }
        }
        if(pcnt == k) {
            v[tail] = sum;
            tail++;
        }
    }
    qsort(v, tail, sizeof(int), compare);
    printf("%d\n", v[x - 1]);
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}
