#include "main.h"

/**
  *  factorial- function that returns a factorial of a number
  *@n: integer
  * Return: factorial
  */


int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else  if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
