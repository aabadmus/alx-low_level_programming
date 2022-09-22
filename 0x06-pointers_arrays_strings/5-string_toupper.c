#include "main.h"

/**
 * *string_toupper - entry
 * @s: given character
 * Return: *
 */
char *string_toupper(char *s)
{
	int n, i;

	for (i = 0; s[i] != '\n'; i++)
	{
		n = s[i];

		if (n >= 97 && n <= 122)
		{
			s[i] = (n - 32);
		}
	}

	return (s);
}
