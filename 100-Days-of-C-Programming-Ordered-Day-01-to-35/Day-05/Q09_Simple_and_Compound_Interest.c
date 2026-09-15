/* Q9: Write a program to calculate simple and compound interest for given principal, rate, and time. */

#include <stdio.h>

int main()
{
    double p, r, t, si, ci, a = 1;
    int i;
    scanf("%lf%lf%lf", &p, &r, &t);
    si = p * r * t / 100;
    for (i = 0;i < (int)t;i++)
        a *= 1 + r / 100;
    ci = p * a - p;
    printf("Simple Interest=%.2f, Compound Interest=%.2f", si, ci);
    return 0;
}
