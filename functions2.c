#include "main.h"

/**
 * print_c - prints a character
 * @list: list of arguments
 * Return: a char
 */

int print_c(va_list list)
{
	char c;

	c = va_arg(list, int);
	_putchar(c);
	return (1);
}

/**
 * print_s - prints a string
 * @list: list of arguments
 * Return: a string
 */

int print_s(va_list list)
{
	int i;
	char *str2;

	str2 = va_arg(list, char *);

	if (str2 == NULL)
	{
		_printf("(null)");
		return (6);
	}
	for (i = 0; str2[i] != '\0'; i++)
		_putchar(str2[i]);
	return (i);
}

/**
 * print_mod - prints the mod sign
 * @list: list of arguments
 * Return: a '%' sign
 */

int print_mod(va_list list)
{
	if (list != NULL)
	{
	}
	_putchar('%');
	return (1);
}

/**
 * _strlen - calculates the length of a string
 * @s: the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
