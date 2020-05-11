#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        unsigned int n, x, ans = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &x);
            ans += x;
        }
        printf("%u\n", ans);
    }
}