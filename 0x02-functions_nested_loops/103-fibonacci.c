#include <stdio.h>

/**
 * main - Computes the sum of even Fibonacci numbers under 4 million and prints it.
 *
 * Return: This function does not return a value (void).
 */
int main(void)
{
	size_t count, i, j, k, sums;

	i = sums = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			sums += k;
		}
	}
	printf("%lu\n", sums);
	return (0);
}
