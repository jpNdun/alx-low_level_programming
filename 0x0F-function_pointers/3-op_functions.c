#include "3-calc.h"
/**
 * op_add - returns the sum of 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of 2 numbers
 * @a: num1
 * @b: num2
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of division
 * @a: num1
 * @b: num2
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
