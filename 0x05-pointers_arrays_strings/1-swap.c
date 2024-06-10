#include "main.h"

/**
 * swap_int - A function that swaps two numbers
 * @a: the first entry
 * @b: the second entry
 * Return: 0 on success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
