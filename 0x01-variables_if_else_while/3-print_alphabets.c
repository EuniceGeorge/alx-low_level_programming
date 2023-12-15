#include <stdio.h>

/**
 * main- this is the main function
 * Return: 0 on success
 */

int main(void)
{
	char alpha, ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
