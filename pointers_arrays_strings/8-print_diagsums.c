#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix.
 */

void print_diagsums(int *a, int size)
{
    int main_diag_sum = 0;
    int secondary_diag_sum = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        main_diag_sum += a[i * size + i];
        secondary_diag_sum += a[i * size + (size - 1 - i)];
    }

    printf("%d, %d\n", main_diag_sum, secondary_diag_sum);
}
