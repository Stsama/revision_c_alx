#include "main.h"
/**
 *  function that prints every other character of a string, starting with the first character
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
