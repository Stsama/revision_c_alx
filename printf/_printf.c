#include "main.h"
/*
 * _printf - Function that prints out all output
 *
 * @format specifier
 * Return: number of bytes
 */
int _printf(const char *format, ...)
{
	unsigned int i, nb_char, nb_int, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			putchaar(format[i]);
		else if(format[i + 1] == 'c')
		{
			putchaar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			nb_char = putss(va_arg(args, char *));
			i++;
			count += nb_char - 1;
		}
		else if (format[i + 1] == '%')
		{
			putchaar('%');
		}
		else if (format[i + 1] == 'd')
		{
			nb_int = puts2(va_arg(args, int));
			i++;
			count += nb_int;
		}

		count++;
	}
	return (count);
}

