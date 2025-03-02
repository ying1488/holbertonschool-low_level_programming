#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string reversed.
 * @s: string to be printed.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = 0, index = 0;
	len = _strlen(s);

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

int _strlen(char*s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
