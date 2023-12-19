#include "main.h"

/**
 * print_to_98- this is the entry point
 * @n: the value to test
 *
 * Return: it returns the value
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n < 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d", n);

			if (n > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
