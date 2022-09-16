#include "main.h"

/**
 * print_numbers - 1......9
 * @i: is the letter being tested
 *
 */

void print_numbers(void)

{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
