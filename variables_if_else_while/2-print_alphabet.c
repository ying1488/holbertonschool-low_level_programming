#include <stdio.h>

/**
 * main - Prints a text according number
 * description : main
 * Return: Always (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
