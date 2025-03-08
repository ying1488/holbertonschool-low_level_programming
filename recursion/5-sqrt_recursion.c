#include "main.h"
#include <stdio.h>
/**
  * _sqrt- prints a square root of number
  *@n: number
  *@i: integer to test
  * Return: sqrt num
  */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}


/**
  * _sqrt_recursion- prints a square root of number
  *@n: number
  * Return: sqrt num
  */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

