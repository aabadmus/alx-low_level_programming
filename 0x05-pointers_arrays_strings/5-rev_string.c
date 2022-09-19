#include "main.h"

/**
 *rev_string - prints strings in reverse
 *@s : a string
 *Return - void
 **/
void rev_string(char *s)
{

	int index = 0;
	int r_index;      /* revsersed index */
	char c;
	int length;

	for (length = 0; s[length] != '\0'; length++)
		continue;
	r_index = length - 1;
	while (index != r_index && index < r_index)
	{
		c = s[index];
		s[index] = s[r_index];
		s[r_index] = c;
		index++;
		r_index--;
	}
}
