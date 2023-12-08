#include <stdarg.h>
#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _printf - prints formated text.
 * @format: the text to be printed
 *
 * Return: the character printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list data;

	va_start(data, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(data, int));
					break;
				case 's':
					count += print_string(va_arg(data, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'i':
					count += print_decimal(va_arg(data, int));
					break;
				case 'd':
					count += print_decimal(va_arg(data, int));
					break;
				default:
					count += _putchar(format[i]);
					i--;
			}
			i += 1;
		}
	}
	va_end(data);
	return (count);
}

