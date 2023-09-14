#include "main.h"

/**
 * print_alphabet - This function prints the English alphabet from 'a' to 'z'.
 *
 * Return: This function does not return any value.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - function prints the alphabet from 'a' to 'z' ten times.
 *
 * Return: This function does not return any value.
 */
void print_alphabet_x10(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		print_alphabet();
	}
}
