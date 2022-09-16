#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{

	int x, y, z;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			z = x - 1;

			for (y = 0; y <= z; y++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
