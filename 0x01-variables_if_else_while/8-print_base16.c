#include <stdio.h>

/**
 * main- The main funtion
 * Return: 0 on succes
 */
int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
