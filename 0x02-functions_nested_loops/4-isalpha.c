#include "main.h"

/**
 * isalpha - checks for alphabetical letters
 * @c: a character to be checked on
 * Return: returns  or 1 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
