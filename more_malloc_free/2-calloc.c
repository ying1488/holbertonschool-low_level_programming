#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array with malloc
 * @nmemb: array elements
 * @size: size of mem
 * Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);

	if (s == NULL)
	{
		return (NULL);
	}

	while(i < (nmemb * size))
	{
		s[i] = 0;
		i = i + 1;
	}

	return (s);
}
