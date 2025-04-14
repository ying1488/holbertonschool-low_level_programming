#include <stdio.h>
#include "main.h"


/**
 *binary_to_uint - a function that converts 
 *a binary number to an unsigned int.
 *@b: pointer to a string of 0 an 1
 *Return: the converted number, or 0 if
 *there is one or more chars in the string b that is not 0 or 1
 *b is NULL
 */ 

unsigned int binary_to_uint(const char *b)
{
	int intNumber = 0, i = 0;

	if (b == NULL || *b == '\0'
		return (0);
	
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/*shift the number left by 1 and add new digit */
			intNumber == intNumber *2 + (b[i] - '0');
			i++;
	}
	return (intNumber);
}
