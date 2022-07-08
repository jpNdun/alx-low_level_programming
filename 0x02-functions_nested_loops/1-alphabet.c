#include "main.h"
/**
 * print_alphabet -> prints the lowercase alphabets
 * Return: nothing
 */
void main(void)
{
int j;
print_alphabet();
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
return (0);
}
