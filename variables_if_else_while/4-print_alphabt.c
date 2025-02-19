#include <stdio.h>
#include <string.h>

/**
 * main - Prints a text according number
 * description : main
 * Return: Always (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
	}
	putchar('\n');

	return (0);
}
