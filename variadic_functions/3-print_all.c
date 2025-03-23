#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print anything
 * @format: as bellow
 * Return: always sucess
 */

void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_list list;
	int i = 0;
	int j = 0;
	int printed_one = 0;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (*ops[j].t == format[i])
			{
				if (printed_one == 1)
				{
					printf(", ");
				}
				ops[j].f(&list);
				printed_one = 1;
			}
			j = j + 1;
		}
		j = 0;
		i = i + 1;
	}
	va_end(list);
	printf("\n");
}
/**
 * print_char - print character
 * @list: as bellow
 * Return: always sucess
 */


void print_char(va_list *list)
{
	char c;

	c = va_arg(*list, int);
	printf("%c", c);
}
/**
 * print_int - print int
 * @list: as bellow
 * Return: always sucess
 */


void print_int(va_list *list)
{
	int i;

	i = va_arg(*list, int);
	printf("%d", i);
}
/**
 * print_float- print float
 * @list: as bellow
 * Return: always sucess
 */


void print_float(va_list *list)
{
	float f;

	f = va_arg(*list, double);
	printf("%f", f);
}
/**
 * print_string- print anything
 * @list: as bellow
 * Return: always sucess
 */
void print_string(va_list *list)
{
	char *s = va_arg(*list, char *);
	printf("%s", s);
	
}
