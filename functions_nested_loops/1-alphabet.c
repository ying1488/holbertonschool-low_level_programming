#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the alphabet, in lowercase
 * description : print_alphabet prints the alphabet, in lowercase
 * Return : Always 0.
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
