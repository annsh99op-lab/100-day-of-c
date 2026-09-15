/* Q16: Write a program to input three numbers and find the largest among them using if–else. */

#include <stdio.h>

int main()
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("Largest is %d", max);
    return 0;
}
