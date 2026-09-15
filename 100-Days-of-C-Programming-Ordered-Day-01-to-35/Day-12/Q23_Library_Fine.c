/* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled. */

#include <stdio.h>

int main()
{
    int d, f;
    scanf("%d", &d);
    if (d > 30)
        printf("Membership Cancelled");
    else
    {
        if (d <= 5)
            f = d * 2;
        else if (d <= 10)
            f = 10 + (d - 5)*4;
        else
            f = 30 + (d - 10)*6;
        printf("Fine Rs %d", f);
    }
    return 0;
}
