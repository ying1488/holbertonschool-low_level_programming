#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for letter,lowercase or uppercase
 * @c: the character to check
 * Return: Always (Success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 91) || (c >= 97 && c <= 122))
	{
	return (1);
	}

	return (0);
}
