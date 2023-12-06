#include "main.h"

/**
 * _printf - the function that works as printf
 * @format: the formated text to be printed
 *
 * Return: printed chars
 */
int _printf(const char *format, ...)
{
	int i;
	int count_char = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count_char += _putchar(format[i]);
		}
		else
		{
			i++;
			count_char += handle_print(format, &i, list);
		}
	}

	va_end(list);
	return (count_char);
}

/**
 * handle_print - prints an argumetn based on it type
 * @fmt: the fomated string which is argumet to printf
 * @list: The list of argument to  be printed
 * @index: the index
 * Return: the prited character count
 */
int handle_print(const char *fmt, int *index, va_list list)
{
	int j, printed = 0;

	fmt_type format_functions[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'d', print_int}, {'i', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexa_lower},
		{'X', print_hexa_upper}, {'\0', NULL}
	};

	for (j = 0; format_functions[j].fmt != '\0'; j++)
		if (fmt[*index] == format_functions[j].fmt)
			printed += format_functions[j].fn(list);
	return (printed);
}
