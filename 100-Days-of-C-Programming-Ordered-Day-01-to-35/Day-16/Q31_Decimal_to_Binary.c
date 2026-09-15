/* Q31: Write a program to take a number as input and print its equivalent binary representation. */

#include <stdio.h>

int main()
{
    int n, b = 0, p = 1;
    scanf("%d", &n);
    if (n == 0)
        printf("0");
    else
    {
        while (n)
        {
            b += (n % 2)*p;
            p *= 10;
            n /= 2;
        }
        printf("%d", b);
    }
    return 0;
}
