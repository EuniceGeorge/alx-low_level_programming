#include "main.h"

/**
 * print_line- This is the entry point
 * Decsription: print a
 * @n: the number of line to prints
 * Return: void
 */

void print_line(int n)
{
	int size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (size = 0; size < n; size++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
