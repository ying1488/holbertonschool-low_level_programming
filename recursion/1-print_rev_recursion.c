#include "main.h"
#include <stdio.h>


/**
  *  _print_rev_recursion- prints a reversed string.
  *@s: string
  * Return: reversed string
  */

void _print_rev_recursion(char *s)
{

	int len = 0;
	int i = 0;

	len = _strlen(s);

	if (*s != '\0')
	{
		_putchar(*s);

		for (i = len - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}


