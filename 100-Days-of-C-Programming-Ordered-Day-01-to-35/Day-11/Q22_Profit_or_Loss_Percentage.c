/* Q22: Write a program to find profit or loss percentage given cost price and selling price. */

#include <stdio.h>

int main()
{
    float cp, sp, p;
    scanf("%f%f", &cp, &sp);
    if (sp > cp)
    {
        p = (sp - cp)*100 / cp;
        printf("Profit %.2f%%", p);
    }
    else if (cp > sp)
    {
        p = (cp - sp)*100 / cp;
        printf("Loss %.2f%%", p);
    }
    else
        printf("No Profit No Loss");
    return 0;
}
