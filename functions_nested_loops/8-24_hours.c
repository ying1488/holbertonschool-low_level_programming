#include "main.h"

/**
 * jack_bauer - prints every minute of the date
 * time format hh:mm
 * Return: value of the last digit
 */

void jack_bauer(void)
{
	int i, j;
	/* loop for hour */
	i = 0;
	while (i < 24)
	{
		/* loop for minute */
		j = 0;
		while (j < 60)
		{
			/* show time in hh:mm format */
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');		
			j++;
		}
		i++;
	}
}
