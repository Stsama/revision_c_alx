#include "main.h"

/**
 * function that prints the last digit of a number.
 */
int print_last_digit(int x)
{
	int result = x % 10;

	if (result < 0)
		result *= (-1);
	_putchar(result + '0');
	return (result);
}
