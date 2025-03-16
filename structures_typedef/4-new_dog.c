#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * get_size_of- function that gets the size of string
 * @str: string
 * Return: size of string
 */

int get_size_of(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i + 1);
}

/**
 * copy_string- function that copies a string
 * @str: string
 * Return: pointer to string
 */

char *copy_string(char *str)
{
	int i = 0;
	int size;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	size = get_size_of(str);

	s = malloc(size);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i = i + 1;
	}
	s[i] = '\0';
	return (s);
}

/**
 * dog_t *new_dog - function that creates a new dog
 * @name: string
 * @age: age of dog
 * @owner:owner
 * Return: null if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n;
	char *o;

	n = copy_string(name);

	if (n == NULL)
	{
		free(n);
		return (NULL);
	}

	o = copy_string(owner);
	if (o == NULL)
	{
		free(n);
		free(o);
		return (NULL);
	}

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		free(n);
		free(o);
		free(d);
		return (NULL);
	}

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}


