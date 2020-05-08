#include <stdio.h>


int solve(int n, int k) {
    int joribar_nums = n;
    int joribar_bar_nums = 0;
    int ans = 0;
    while (joribar_nums > 0) {
        joribar_bar_nums += joribar_nums;
        ans += joribar_nums;
        joribar_nums = 0;
        // eat-step

        joribar_nums = joribar_bar_nums / k;
        joribar_bar_nums -= joribar_nums*k;
        // trade-step
    }
   return ans;
}

int main() {
    int t; scanf("%d", &t);
    while (t > 0) {
        int n, k;
        scanf("%d %d", &n, &k);
        printf("%d\n", solve(n, k));
        t--;
    }
    return 0;
}
