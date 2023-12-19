#include "main.h"

/**
 * print_sign- this is the main entry
 * @n: the value to test
 * Return: 1 on success and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0' + 0);
		return (0);
	}
}
