#include <stdio.h>
#include <string.h>

/**
 * print_most_numbers - Prints a text according number
 * Return: numbers except 2 and 4.
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
	{
		if (x != '2' && x != '4')
		{
			putchar(x + '0');
		}
	}
	putchar('\n');
}
