#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array- creates an array  and initialise it with a char.
 * @size: size of the memory
 * @c: char
 * returns- pointers to array or NULL
 */


char *create_array(unsigned int size, char c)
{
	char *array = (char *) malloc(size * sizeof(char));

	unsigned int i;

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
