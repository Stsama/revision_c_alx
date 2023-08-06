#include <stdio.h>
#include "main.h"

/**
 * function that prints the n times table, starting with 0
 */
void print_times_table(int n)
{
	int x, y, result;

	if (n <	15 && n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				result = x * y;
				if (x <= 99)
					_putchar(' ');
				else if (x < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
					

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
				}else if (result >= 10 && result <= 99)
					_putchar((result / 10) + '0');

				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
