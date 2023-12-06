#include "main.h"

/**
 * print_hexa_lower - convert and prints number
 * @list - The argumet list
 *
 * Return: the count of character
 */
int print_hexa_lower(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	return (handle_hexa(num, "0123456789abcdef"));
}
/**
 * print_hexa_upper - convert and prits number in hexa upper
 * @list: The argument list
 *
 * Return: the count of char
 */
int print_hexa_upper(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	return (handle_hexa(num, "0123456789ABCDEF"));
}

/**
 * handle_print - print hexa in upper or in lower
 * @num: the number
 * @hexa: the string
 *
 * Return: the count of the string
 */
int handle_hexa(unsigned int num, char *hexa)
{
	int count;

	count = 0;
	if (num / 16)
		count += handle_hexa(num / 16, hexa);
	count += _putchar(hexa[num % 16]);
	return (count);
}
