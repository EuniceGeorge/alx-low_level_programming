#include <stdio.h>

/**
 * main- This is the main function
 * Return: 0 on success
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
