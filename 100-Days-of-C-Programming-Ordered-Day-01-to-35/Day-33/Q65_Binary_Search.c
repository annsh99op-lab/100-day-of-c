/* Q65: Search in a sorted array using binary search. */

#include <stdio.h>

int main()
{
    int a[100], n, x, l = 0, r, m, pos = -1, i;
    scanf("%d", &n);
    for (i = 0;i < n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    r = n - 1;
    while (l <= r)
    {
        m = (l + r)/2;
        if (a[m] == x)
        {
            pos = m;
            break;
        }
        else if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    if (pos >= 0)
        printf("Found at index %d", pos);
    else
        printf("-1");
    return 0;
}
