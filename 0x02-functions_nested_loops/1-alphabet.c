#include "main.h"

/**
 * print_alphabet- this is the entry point
 * description: a function that prints the alphabet, in lowercase
 * Return: void
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
