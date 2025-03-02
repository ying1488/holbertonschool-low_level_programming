#include "main.h"
#include <stdio.h>

/**
 * int _strlena function that returns the length of a string.
 * * @n: parameter targeted.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int c = 0;

	for(; *s != '\0'; s++)
	{
	 c++;
	}

	return(c);
}
