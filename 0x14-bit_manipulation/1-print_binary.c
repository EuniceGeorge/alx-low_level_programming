#include "main.h"
/**
 ** print_binary - converts a decimal number to binary
 ** @n: integer to convert
 **/
void print_binary(unsigned long int n)
{
	int binNum[32];
	int i;

	while (n > 0)
	{
		binNum[i] = n % 2;
		n = n / 2;
	}
	for (int j = i - 1; j > 0; j--)
	{
		printf("%d", binNum[j]);
	}
}
