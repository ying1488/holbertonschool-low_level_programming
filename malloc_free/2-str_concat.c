#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * str_concat- Concatenates two strings of any size.
  * @s1: first string
  * @s2: second string
  * Return: target
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, /*inc for s1*/j = 0; /*inc for s2*/
	int k = 0,/*inc for s1 + s2 */ l = 0;  /* length = s1 + s2*/
	char *s;

	if (s1 == NULL)
		s1 = ""; /*Handle null input*/

	if (s2 == NULL)
		s2 = ""; /*Handle allocation failure*/

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
