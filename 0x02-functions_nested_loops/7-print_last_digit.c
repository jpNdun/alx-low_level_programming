#include "main.h"
/**
 * print_last_digit -> prints the last digit of a number
 * @n: digit to find the last place of
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int p;

	p = (n % 10);
	if (p < 10)
	{
		p = (-1 * p);
	}

	_putchar(p + '0');
	
	return (p);
}
