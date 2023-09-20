#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 *  function that prints strings, followed by a new line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
