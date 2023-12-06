#include "main.h"

/**
 * print_unsigned - print unsined int
 * @list: list
 *
 * Return: the count of printed character
 */
int print_unsigned(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	return (handle_unsign(num));
}
/**
 * handle_unsign - print the unsign
 * @num: the list
 *
 * Return: the count of the character printed
 */

int handle_unsign(unsigned int num)
{
	int count;

	count = 0;
	if (num / 10)
		count += handle_unsign(num / 10);
	count += _putchar(num % 10 + '0');
	return (count);
}
