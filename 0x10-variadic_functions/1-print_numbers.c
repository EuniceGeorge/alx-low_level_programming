#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - prints numbers
  * @separator: character to use to delimit
  * @n: number of elements to print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list par;

	va_start(par, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(par, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
