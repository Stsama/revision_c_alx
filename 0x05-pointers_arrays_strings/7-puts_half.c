#include "main.h"
/**
 * function that prints half of a string, followed by a new line.
 */
void puts_half(char *str)
{
	int length, x, n;

	length = 0;

	for (x = 0; str[x] != '\0'; x++)
		length++;
	n = length / 2;
	if (length % 2 == 1)
		n = (length + 1) / 2;

	for (x = n; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
