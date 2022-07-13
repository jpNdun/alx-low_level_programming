#include "main.h"
/**
 * swap_int - a function that swaps the values of 2 integers
 * @a: input 1
 * @b: input 2
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}		
