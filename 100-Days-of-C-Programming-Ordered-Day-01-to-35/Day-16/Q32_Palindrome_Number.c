/* Q32: Write a program to check if a number is a palindrome. */

#include <stdio.h>

int main()
{
    int n, t, r = 0;
    scanf("%d", &n);
    t = n;
    while (t)
    {
        r = r * 10 + t % 10;
        t /= 10;
    }
    if (r == n)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
