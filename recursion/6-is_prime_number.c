#include "main.h"
#include <stdio.h>
/**
  * is_prime_number_step- detemines if number is prime
  *@s: string
  * Return: prints number
  */


int is_prime_number_step(int n, int *s)
{
	int result = 1;

	if (*s != 0)
	{
		if (n == *s)
		{
			result = 1;
		}
		else
		{
			result = is_prime_number_step(n, s + 1);
		}
	}
	return (result);
}

/**
  * is_prime_number- function returns prime number
  *@n: number
  * Return: returns prime number
  */
int is_prime_number(int n)
{
	int result = 0;

	int s[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 0};

	if (n > 1 && (n % 2 != 0))
	{
		result = is_prime_number_step(n, s);
	}

	return (result);
}
