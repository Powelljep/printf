#include "main.h"

/**
 * print_char - prints char
 * @list: list of arguments
 *
 * Return: the number of string to be string
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	return (handle_char(c));
}

/**
 * handle_char - handle different case print
 * @c: the character
 * Return: the count of printed character
 */
int handle_char(char c)
{
	return (_putchar(c));
}
