#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * *s: string to be tested.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
