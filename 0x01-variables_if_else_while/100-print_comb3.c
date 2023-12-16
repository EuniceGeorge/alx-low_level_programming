#include <stdio.h>

/**
 * main- The main function
 * Return: 0 on success
 */

int main(void)
{
	int x, y;
/*
 * Iterate through all possible combinations of two digits
 */
	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
/*
 * If not the last combination, print ", "
 */
			if (!(x == 8 && y == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
