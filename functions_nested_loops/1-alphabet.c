#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_alphabet - prints the alphabets
 * Return : 0
 */

void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
