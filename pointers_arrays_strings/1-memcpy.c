#include "main.h"
#include <stdio.h>

/**
  * _memset - Fill memory with a constant byte
  * @s: memory area to fill
  * @dest: dest
  * @src: source
  *
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
