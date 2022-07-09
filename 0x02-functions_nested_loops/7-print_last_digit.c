#include "main.h"
/**
 * print_last_digit -> prints the last digit of a number
 * @n: digit to find the last place of
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar((n % 10) + '0');
	_putchar('\n');
	return (n % 10);
}
