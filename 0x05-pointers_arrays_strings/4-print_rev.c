#include "main.h"
/**
 * function that prints a string, in reverse, followed by a new line.
 */
void print_rev(char *s)
{
	int total = 0, x = 0;

	while (*s != '\0')
	{
		total++;
		s++;
	}
	for (x = total; x >= 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
