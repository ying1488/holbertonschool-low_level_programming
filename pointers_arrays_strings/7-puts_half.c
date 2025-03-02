#include "main.h"
#include <stdio.h>

/**
 * puts_half- function that prints half of a string
 * @str: string.
 * Return: Always 0.
 */

void puts_half(char *str)
{
int len = _strlen(str);

if (len % 2 == 0)
{
	len = len / 2;
}

else
{
	len = (len + 1) / 2;
}

while (str[len] != '\0')
{
	_putchar(str[len]);
	len++;
}
_putchar('\n');
}

/**
 * _strlen - a function that returns the length of a string.
 * @*s: string to be tested.
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

