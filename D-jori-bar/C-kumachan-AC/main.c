#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

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
    printf("%d\n", ans);
    return 0;
}
