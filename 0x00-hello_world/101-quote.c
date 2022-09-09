#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 1 (success)
 */
int main(void)
{
	char AA_1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, AA_1, 59);
	return (1);
}
