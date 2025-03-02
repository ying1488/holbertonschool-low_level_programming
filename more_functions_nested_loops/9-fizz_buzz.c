#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - prints a fizz buzz.
 * Return: always 0 (success)
 */

int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
		printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
		printf("Fizz");
		}
		else if (x % 5 == 0)
		{
		printf("Buzz");
		}
		else
		{
		printf("%d", 1);
		}

		if (x != 100)
		{
		printf(" ");
		}
		x++;
	}
	printf("\n");

	return (0);
}
