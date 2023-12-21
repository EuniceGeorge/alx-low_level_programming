#include "main.h"

/**
 * _isupper- This is the entry point
 * Description: Write a function that checks for uppercase character
 * Return: 1 on success, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
