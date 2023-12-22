#include "main.h"
#include <math.h>
/**
 * main- this is the entry point
 * Description: a program to print largest prime factor
 * Return: 0 always
 */

int main(void)
{
	long number = 612852475143;
	long divi, maxpf;
	double square = sqrt(number);

	maxpf = 1;

	for (divi = 1; divi <= square; divi++)
	{
		if (number % divi == 0)
		{
			maxpf = divi;
		}
	}
	printf("%ld\n", maxpf);

	return (0);
}

