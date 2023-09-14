#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of
 *        3 or 5 below 1024.
 *
 * Return: This function does not return a value (void).
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
