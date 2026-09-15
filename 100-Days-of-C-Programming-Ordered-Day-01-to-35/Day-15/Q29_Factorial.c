/* Q29: Write a program to calculate the factorial of a number. */

#include <stdio.h>

int main()
{
    int n, i;
    long long f = 1;
    scanf("%d", &n);
    for (i = 1;i <= n;i++)
        f *= i;
    printf("%lld", f);
    return 0;
}
