#include <stdio.h>
#include "main.h"
/**
 * function that prints a triangle, followed by a new line.
 *only use _putchar function to print
 */
void print_triangle(int size)
{
	if (size <= 0)
		printf("\n");
	else
	{
		int x, y;

		for (x = 1; x <= size; x++)
		{
			for (y = 0; y < size - x; y++)
				_putchar(' ');
			for (y = 0; y < x; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}


