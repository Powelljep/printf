#include "main.h"

/**
 * print_int - print integer
 * @list: the list of arguments
 * Return: the conunt of print string
 */
int print_int(va_list list)
{
	int num;

	num = va_arg(list, int);
	return (handle_num(num));
}
/**
 * handle_num - prints that number
 * @num: the number
 * Return: the number of caracter string priined
 */
int handle_num(int num)
{
	int count;

	count = 0;
	if (num < 0)
	{
		count += _putchar('-');
		num = num * -1;
	}
	if (num / 10)
		count += handle_num(num / 10);
	count += _putchar(num % 10 + '0');
	return (count);
}
