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
	int a = 0;
	int i = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL); /*Handle null input*/
	}

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
		return (NULL); /*Handle allocation failure*/
	}

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';

	return (s);
}
