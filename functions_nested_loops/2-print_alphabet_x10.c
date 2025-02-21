#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Prints a text according number
 * print_alphabet_X10 - print alphabet 10 times
 * Return: Always (Success)
 */

void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;

	while (i < 10)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
