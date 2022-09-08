#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long my_long_int;
	long long my_int;
	float f;

	printf("Size of a char: %2ld byte(s)\n", sizeof(c));
	printf("size of a int: %zu byte(s)\n", sizeof(i));
	printf("size of a long int: %zu byte(s)\n", sizeof(my_long_int));
	printf("size of long long int: %zu byte(s)\n", sizeof(my_int));
	printf("size of a float: %zu byte(s)\n", sizeof(f));
	return (0);
}
