#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: the destination value
 * @src: the source value
 * @n: the limit of the concatenation
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
