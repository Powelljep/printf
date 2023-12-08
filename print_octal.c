#include "main.h"
/**
 * print_octal - print the octal of the string
 * @list: the list of argumets
 *
 * Return: the count of character printed
 */
int print_octal(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	return (handle_octal(num));
}
/**
 * handle_octal - handle octal
 * @num: the number to be converted and printed
 *
 * Return: the count of the character to be printed
 */
int handle_octal(unsigned int num)
{
	int count;

	count = 0;
	if (num / 8)
		count += handle_octal(num / 8);
	count += _putchar(num % 8 + '0');
	return (count);
}
