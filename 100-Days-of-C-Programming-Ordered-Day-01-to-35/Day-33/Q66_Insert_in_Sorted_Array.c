/* Q66: Insert an element in a sorted array at the appropriate position. */

#include <stdio.h>

int main()
{
    int a[101], n, x, i, pos = 0;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    while (pos < n && a[pos] < x)
        pos++;
    for (i = n;i > pos;i--)
        a[i] = a[i - 1];
    a[pos] = x;
    n++;
    for (i = 0;i < n;i++)
        printf("%d ", a[i]);
    return 0;
}
