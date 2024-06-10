#include "main.h"

/**
 * _strlen - counts the lengthof a string
 * @s: the string to be counted
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
