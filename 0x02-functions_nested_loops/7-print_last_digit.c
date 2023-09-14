#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @i: The number to find the last digit of.
 *
 * Return: The last digit.
 */
int print_last_digit(int i)
{
	int n = abs((i % 10));

	_putchar(n + '0');
	return (n);
}
