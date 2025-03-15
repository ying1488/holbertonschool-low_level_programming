#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

 /**
  * malloc_checked - function that allocates memory using malloc
  *@b: unsigned integer
  *returns - pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}

