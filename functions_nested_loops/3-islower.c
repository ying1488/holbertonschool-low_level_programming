#include <stdio.h>
#include "main.h"

/**
 * * _islower - checks for lowercase character
 * @c: the character to check
 * Return: Always (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}

	return (0);
}
