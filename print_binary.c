#include "main.h"

/**
 * print_binary - Prints the binary form of the number
 * @list: the list of arguments
 *
 * Return: the number of character printed
 */
int print_binary(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	return (handle_binary(num));
}
/**
 * handle_binary - change the unsigned integer to binary and prints
 * @num: the number to be changed and printed
 *
 * Return: The number of integer to be printed
 */
int handle_binary(unsigned int num)
{
	int count;

	count = 0;
	if (num / 2)
		count += handle_binary(num / 2);
	count += _putchar(num % 2 + '0');
	return (count);
}
