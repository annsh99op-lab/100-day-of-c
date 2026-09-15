/* Q42: Write a program to check if a number is a perfect number. */

#include <stdio.h>

int main()
{
    int n, i, s = 0;
    scanf("%d", &n);
    for (i = 1;i < n;i++)
        if (n % i == 0)
            s += i;
    if (s == n)
        printf("Perfect number");
    else
        printf("Not perfect number");
    return 0;
}
