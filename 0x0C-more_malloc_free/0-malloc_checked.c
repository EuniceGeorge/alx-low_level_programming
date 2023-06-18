#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: size of buffer
  * Return: pointer to buffer
  *
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	if (p == NULL)
		exit(98);

	p = malloc(b);
	return (p);
}
