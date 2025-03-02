#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string reversed.
 * @s: string to be printed.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (length != '\0')
	{
		length++;
	}
	
	i = length - 1;
	
	while(i >= 0)
	{
        	_putchar(s[i]);
        	i--;
    	}
	_putchar('\n');
}
