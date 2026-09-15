/* Q41: Write a program to swap the first and last digit of a number. */

#include <stdio.h>

int main()
{
    int n, t, d = 0, p = 1, first, last, middle;
    scanf("%d", &n);
    if (n < 10)
    {
        printf("%d", n);
        return 0;
    }
    t = n;
    last = n % 10;
    while (t >= 10)
    {
        t /= 10;
        p *= 10;
    }
    first = t;
    middle = (n % p)/10;
    printf("%d", last * p + middle * 10 + first);
    return 0;
}
