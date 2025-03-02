#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @*str: string to be printed
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
