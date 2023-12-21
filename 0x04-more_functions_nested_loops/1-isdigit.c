#include "main.h"

/**
 * _isdigit- this is tghe entry point
 * Description: A function that checks for digit
 * @c: the value to test
 * Return: 1 on success, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
