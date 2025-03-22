#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 *int_index- function that searches for an integer.
 *@array: array
 *@size: size of array
 *@cmp: compare function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 0 || cmp == NULL || array ==  NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
