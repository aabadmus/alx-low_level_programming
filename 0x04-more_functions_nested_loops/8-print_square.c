#include "main.h"

/**
 * print_square - prints hashes squares.
 * @n: size of the square.
 * Return: no return.
 */
void print_square(int n)
{

	int x;

	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 2)
	{
		_putchar('\n');
	}
}
