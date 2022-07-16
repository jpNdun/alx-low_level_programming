#include "main.h"

/**
* cap_string - prints the uppercase of a string
* @s: string to cap
*
* Return: char value
*/
char*cap_string(char *s)
{
int a = 0, i;
int len = 13;
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

while (s[a])
{
	i = 0;
	while (i < len)
	{
		if ((a == 0 || s[a - 1] == spc[i] && (s[a] >= 97 && s[a] <= 122))
			s[a] = s[a] - 32;
		i++;
	}

	a++;
}

return (s);

}
