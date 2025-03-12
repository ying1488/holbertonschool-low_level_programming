#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _strdup- returns a pointer to a newly allocated space in memory
  *@str: string
  * Return: target
  */

char *_strdup(char *str)
{
	int len = strlen(str);
	char *target = (char *)malloc((len  + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL); /*Handle null input*/
	}

	if (target == NULL)
	{
		return (NULL); /*Handle allocation failure*/
	}

	strcpy(target, str); /*Copy the string*/

	return (target);
}
