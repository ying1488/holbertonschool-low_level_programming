#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: name
 * @f: function
 * Return: Always Success
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
