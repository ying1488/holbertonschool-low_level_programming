#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_square - function that prints a square.
 * @size: size of the square
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		/* number of lines */
		for (x = 0; x < size; x++)
		{
			/* number of # in a line */
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
