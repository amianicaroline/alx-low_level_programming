#include "main.h"

/**
 * _isalpha - checks if a character is an uppercase or lowercase letter from the English alphabet.
 * @ch: character to check.
 *
 * Return: 1 if the character is an English letter, 0 otherwise.
 */
int _isalpha(char ch)
{
	if (isalpha(ch))
		return (1);
	else
		return (0);
}
