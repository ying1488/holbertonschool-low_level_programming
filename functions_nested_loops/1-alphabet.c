#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the alphabet, in lowercase
 * Description : print_alphabet prints the alphabet, in lowercase
 * Return : Always 0.
 */

void print_alphabet(void)
{
	char a ='a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
