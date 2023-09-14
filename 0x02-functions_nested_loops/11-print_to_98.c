#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from a given number to 98.
 * @lb: The number to start counting from towards 98.
 *
 * Return: This function does not return a value (void).
 */
void print_to_98(int lb)
{
	if (lb > 98)
	{
		for (lb = lb; lb >= 98; lb--)
		{
			printf("%d", lb);
			if (lb != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (lb = lb; lb <= 98; lb++)
		{
			printf("%d", lb);
			if (lb != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
