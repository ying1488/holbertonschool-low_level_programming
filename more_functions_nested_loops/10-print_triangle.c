#include <stdio.h>
#include "main.h"


/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */


void print_triangle(int size)
{
	int i, j, space; 
	
	while (size < 0) 
	{
	for (i = 0; i <= size; i++)
		{
		for (space = size; space <= (size - i); space--)
			{
				_putchar(32);
			}
		for (j = 0; j <= size; j++)
			{
				_putchar(42);
			}
		_putchar("\n");
		}	
	}
}
