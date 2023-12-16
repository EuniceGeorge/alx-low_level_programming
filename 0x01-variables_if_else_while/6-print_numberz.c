#include <stdio.h>

/**
 * main- Thos is the main function
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}

	putchar('\n');
	return (0);
}
