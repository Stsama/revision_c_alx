#include "main.h"
/**
 * function that reverses a string.
 */
void rev_string(char *s)
{
	int total = 0, x;
	char reverse;

	while (*s != '\0')
	{
		total++;
		s++;
	}

	for (x = total; x >= 0; x--)
	{
		reverse = s[total];
		s[total] = s[x];
		s[x] = reverse;
	}

}


