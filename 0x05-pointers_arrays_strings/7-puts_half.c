#include "main.h"

/**
 *puts_half - print half of char
 *@str:  a string
 *Return - void
 **/

void puts_half(char *str)
{
	int length = 0;
	int n;
	int r;

	for (length = 0; str[length] != '\0'; length++)
	{
		length = length;
	}
	n = length / 2;
	r = (length - 1) / 2;

	for (length = n; str[length] != '\0'; length++)
	{
		if (length % 2 == 0)
		{
			n = n;
			_putchar(str[length]);
		}

		else
		{
			n = r;
			_putchar(str[length]);
		}
	}
	_putchar('\n');

}
