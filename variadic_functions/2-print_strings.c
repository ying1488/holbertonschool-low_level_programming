#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 *print_strings- print strings
 *@separator:string between strings
 *@n: number
 *Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	
	for (i = 0; i < n ; i++)
	{
		s = va_arg(args, char *);

		printf("%s",s);
		
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}

	va_end(args);
	printf("\n");
}
