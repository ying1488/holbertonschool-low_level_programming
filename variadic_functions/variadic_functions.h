#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


typedef struct op
{
	char *t;
	void (*f)(va_list *list);
} op_t;

void print_char(va_list *list);
void print_int(va_list *list);
void print_float(va_list *list);
void print_string(va_list *list);


#endif /*VARIADIC_FUNCTIONS_H */
