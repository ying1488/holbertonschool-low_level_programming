#include "main.h"
#include <stdio.h>


/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n ; y++)
	{
		if (y != n - 1)
		{
			printf("%d, ", a[y]);
		}
		else
		{
			printf("%d", a[y]);
		}
	}
	printf("\n");
}
