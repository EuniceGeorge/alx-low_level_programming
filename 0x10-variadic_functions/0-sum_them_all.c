#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * @...: variable list of arguments
  * Return: sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;

	va_list par;

	if (n == 0)
		return (0);

	va_start(par, n);

	for (i = 0; i < n; i++)
	{
		unsigned int sum = va_arg(par, int);

		result += sum;
	}
	va_end(par);
	return (result);
}
