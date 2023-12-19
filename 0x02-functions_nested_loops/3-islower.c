#include "main.h"

/**
 * _islower- Entry of the function
 * Description: prints only lowercase
 * @c: The parameter
 * Return: 1 on success and 0 otherwise
 */

int _islower(int c)
{
	for (c = 97; c <= 122; c++)
	{
		if (c <= 97 || c > 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (c);
}
