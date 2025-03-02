#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string reversed.
 * @s: string to be printed.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int count = 0;
	int length;
	char temp;

	while (s[count] != '\0')
	{
		count = count + 1;
	}

	count = count - 1;
	length = count;

	while (count > (length / 2))
	{
		temp = s[count];
		s[count] = s[length - count];
		s[length - count] = temp;

		count = count - 1;
	}
}
