#include "main.h"
#include <stdio.h>

/**
 * _memset()- function fills the first n bytes of the memory area
 * @s: pointed at 
 * @b: characters in b 
 * @n :unsigned integer
 *
 * Return: a pointert ot he memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
 
	for (i = 0; i < n ; i ++)
	{
		s[i] = b;
	}	
	
	return (s);
}
