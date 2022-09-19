#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: a string
 * return: void
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	for (length = 0; s[length] != '\0'; length++)
		continue;
	for (i = length - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
