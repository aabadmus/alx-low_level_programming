#include "main.h"
#include <stdlib.h>

/**
 * create_array - to create array
 * @size: Required size of the array
 * @c: First character of array
 * Return: if size = 0 return NULL, else return array.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i =  0; i < size; i++)
		str[i] = c;
	return (str);
}
