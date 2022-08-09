#include "main.h"

/**
 * print_char - prints a character
 * @list: list of arguments
 * Return; amount of characters printed
 */

int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string - prints a string
 * @list; list of arguments
 * Return: amount of characters printed
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}

/**
 * print_percent - prints a percent symbol
 * @list: list of arguments
 * @Return: amount of characters printed
 */

int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 * print_integer  prints an integer
 * @list: list of arguments
 * Return: amount of characters printed
 */

int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * unsigned_integer - prints unsigned integers
 * @list: list of arguments
 * Return: the count of the numbers
 */

int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));

	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}
