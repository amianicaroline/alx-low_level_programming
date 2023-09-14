#include "main.h"

/**
 * _islower - checks if a character is a lowercase
 * letter in the English alphabet.
 * @ch: character to check.
 *
 * Return: 1 if it is a lowercase letter, 0 otherwise.
 */
int _islower(char ch)
{
	if (islower(ch))
		return (1);
	else
		return (0);
}
