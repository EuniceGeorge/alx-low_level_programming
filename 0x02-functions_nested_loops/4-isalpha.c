#include "main.h"

/**
 * _isalpha- This is the main enytry
 * Description: prints only characters
 *
 * @c: the input value
 * Return: 1 on success, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
