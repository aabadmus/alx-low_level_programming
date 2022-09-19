#include "main.h"

/**
 *puts_half - print half of char
 *@str:  a string
 *Return - void
 **/

void puts_half(char *str)
{
	int length = 0;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length >= 5)
		_putchar(str[length]);
	}
	_putchar('\n');
}
