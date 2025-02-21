#include "main.h"

/**
 * main - Prints the alphabet, in lowercase
 * Description : prints the alphabet, in lowercase
 * Return : Always 0.
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n')
	return (0);
}
