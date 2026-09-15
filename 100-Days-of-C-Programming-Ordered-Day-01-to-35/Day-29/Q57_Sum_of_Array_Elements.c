/* Q57: Find the sum of array elements. */

#include <stdio.h>

int main()
{
    int a[100], n, i, s = 0;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
    {
        scanf("%d", &a[i]);
        s += a[i];
    }
    printf("%d", s);
    return 0;
}
