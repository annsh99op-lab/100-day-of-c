/* Q39: Write a program to find the product of odd digits of a number. */

#include <stdio.h>

int main()
{
    int n, d, p = 1;
    scanf("%d", &n);
    while (n)
    {
        d = n % 10;
        if (d % 2)
            p *= d;
        n /= 10;
    }
    printf("%d", p);
    return 0;
}
