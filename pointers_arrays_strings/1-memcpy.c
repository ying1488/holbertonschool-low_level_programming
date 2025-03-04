#include "main.h"
#include <stdio.h>

/**
  * _memcpy - copies memory area
  * @n: unsigned int n
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
