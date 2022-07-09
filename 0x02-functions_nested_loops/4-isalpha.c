#include "main.h"
/**
 * isalpha - checks whether a characater is from the English alphabet.
 * @c: a character to be checked on
 * Return: 1 if the character is an English character
 * 0 if the character is not an English character
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
