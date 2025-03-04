#include <stdio.h>
#include "main.h"

/**
  * print_chessboard- Prints the chessboard
  * @a: The string to be treated
  * Return: Nothing
*/


void print_chessboard(char (*a)[8])
{
	int i = 0;/* row */
	int j = 0;/* column */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
