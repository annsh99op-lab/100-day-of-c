/* Q43: Write a program to check if a number is a strong number. */

#include <stdio.h>

int main()
{
    int n, t, d, i, f, s = 0;
    scanf("%d", &n);
    t = n;
    while (t)
    {
        d = t % 10;
        f = 1;
        for (i = 1;i <= d;i++)
            f *= i;
        s += f;
        t /= 10;
    }
    if (s == n)
        printf("Strong number");
    else
        printf("Not strong number");
    return 0;
}
