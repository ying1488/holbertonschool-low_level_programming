#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min : min
 * @max :max
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int arr;
	
	/*If min > max, return NULL*/
	if (min > max)
	{
		return NULL;
	}
	
	ptr = malloc(sizeof(int) * (max - min + 1));
	
	/*If malloc fails, return NULL*/
	if (ptr == NULL)
		return (NULL);
   
	/* Return: the pointer to the newly created array*/
	
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
