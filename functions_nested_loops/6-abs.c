#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the int that we are checking.
 * Return: Always (Success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
