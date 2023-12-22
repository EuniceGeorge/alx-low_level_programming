#include "main.h"
/**
 * print_number- This is the entry point
 * Description: a function to print integer numbers
 * @n: the number to print
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n; /*convert the number to interger after printing the negativ*/
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
