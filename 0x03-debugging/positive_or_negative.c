#include "main.h"

/**
 * positive_or_negative - Entry point
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
int n;
(void)i;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n > 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}
}