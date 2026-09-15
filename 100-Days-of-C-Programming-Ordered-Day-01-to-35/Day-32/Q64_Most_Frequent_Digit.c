/* Q64: Find the digit that occurs the most times in an integer number. */

#include <stdio.h>

int main()
{
    long long n;
    int c[10] =
    {
        0
    }
    , d, i, max = 0, ans = 0;
    scanf("%lld", &n);
    if (n == 0)
        c[0] = 1;
    while (n)
    {
        d = n % 10;
        c[d]++;
        n /= 10;
    }
    for (i = 0;i < 10;i++)
        if (c[i] > max)
        {
            max = c[i];
            ans = i;
        }
    printf("%d", ans);
    return 0;
}
