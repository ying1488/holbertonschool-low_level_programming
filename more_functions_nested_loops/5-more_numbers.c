#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always (Success)
 */

void more_numbers(void)
{
	char n;
	int i;

	i = 0;

	while (i < 10)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}

			_putchar((n % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
