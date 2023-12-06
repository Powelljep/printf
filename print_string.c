#include "main.h"

/**
 * print_string - print_string
 * @list: the arguments
 *
 * Return: the number of string to printed
 */
int print_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	return (handle_string(str));
}

/**
 * handle_string - handle the print of string in diffent casse
 * @str:the string
 *
 * Return: the number of character to be printed
 */

int handle_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
