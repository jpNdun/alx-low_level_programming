#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q' || alphabet == 'e')
{
continue;
}
putchar (alphabet);
putchar ('\n');
return (0);
}
}
