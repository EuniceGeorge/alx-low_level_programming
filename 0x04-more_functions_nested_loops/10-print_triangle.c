#include "main.h"

/**
 * print_triangle- This is the entry point
 * Description: to print a triangle
 * @size: thesize of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	for (x = 0; x < size; x++)
	{
		for (y = size - x; y > 1; y--)
		{
			_putchar(' ');
		}
		for (z = 0; z <= x; z++)
		{
			_putchar('#');
		}
		if  (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
