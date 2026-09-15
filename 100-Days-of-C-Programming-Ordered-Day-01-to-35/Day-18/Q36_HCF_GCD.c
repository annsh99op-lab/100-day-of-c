/* Q36: Write a program to find the HCF (GCD) of two numbers. */

#include <stdio.h>

int main()
{
    int a, b, t;
    scanf("%d%d", &a, &b);
    while (b)
    {
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d", a);
    return 0;
}
