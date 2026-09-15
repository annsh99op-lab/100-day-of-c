/* Q33: Write a program to check if a number is an Armstrong number. */

#include <stdio.h>

int main()
{
    int n, t, digits = 0, sum = 0, d, i, p;
    scanf("%d", &n);
    t = n;
    while (t)
    {
        digits++;
        t /= 10;
    }
    t = n;
    while (t)
    {
        d = t % 10;
        p = 1;
        for (i = 0;i < digits;i++)
            p *= d;
        sum += p;
        t /= 10;
    }
    if (sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
