#include "main.h"

/**
 * mul- This is the main entry
 * Description: A function that prints the multiplication of two numbers
 * @a: the first value
 * @b: The second value
 * Return: the multiplication of two numbers
 */

int mul(int a, int b)
{
	int mult;

	mult = a * b;

	if (!(a == 0 && b == 0))
	{
	return (mult);
	}
	return (0);
}
