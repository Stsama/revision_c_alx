#include <stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"
/**
 * function that prints numbers, followed by a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i, nbre;
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		nbre = va_arg(list, int);
		printf("%d",nbre);
		if (*separator != '\0' && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
