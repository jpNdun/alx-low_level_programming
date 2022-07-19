#include "main.h"

/**
 * print_diagsums - Print the sum of two diagonals of matrix
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum += a[(size + 1) * b];
		sum += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
