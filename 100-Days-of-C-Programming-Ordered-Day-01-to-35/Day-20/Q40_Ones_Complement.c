/* Q40: Write a program to find the 1’s complement of a binary number and print it. */

#include <stdio.h>

int main()
{
    char b[100];
    int i;
    scanf("%99s", b);
    for (i = 0;b[i];i++)
        printf("%c", b[i] =='0'?'1':'0');
    return 0;
}
