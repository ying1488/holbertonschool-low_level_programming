#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * description: main
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if the number is greater than 0: is positive */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	/* If the number is less than 0: is negative */
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	/* if the number is 0: is zero */
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
