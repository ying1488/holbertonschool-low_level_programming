#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>

/**
 *op_add - functions that sums a and b.
 *@a: int a
 *@b: int b
 *Return: result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}



/**
 *op_sub - functions that subtract a and b.
 *@a: int a
 *@b: int b
 *Return: result of operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}



/**
 *op_mul- functions that multiplies a and b.
 *@a: int a
 *@b: int b
 *Return: result of operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}



/**
 *op_div - functions that divides a and b.
 *@a: int a
 *@b: int b
 *Return: result of operation
 */

int op_div(int a, int b)
{
	return (a / b);
}




/**
 *op_mod - functions that sums a and b.
 *@a: int a
 *@b: int b
 *Return: result of operation
 */

int op_mod(int a, int b)
{
	return (a % b);
}


