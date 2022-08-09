#include "main.h"

/**
 * _printf - functions that prints
 * @format: format of the string
 * @...: other arguments
 * Return: a string
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count = -1;

	pr_f ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"%", print_mod},
		{"i", print_d},
		{"r", print_r},
		{NULL, NULL}
	};

	if (format != NULL)
	{
		va_start(ap, format);
		count = _function(format, ops, ap);
		va_end(ap);
	}
	return (count);
}

/**
 * _function - prints and calls functions
 * @format: string passed
 * @ops: special options
 * @ap: arguments
 * Return: number of chars printed
 */

int _function(const char *format, pr_f ops[], va_list ap)
{
	int count = 0, i, j;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			for (j = 0; ops[j].op != NULL; j++)
			{
				if (format[i + 1] == ops[j].op[0])
				{
					count = count + ops[j].f(ap);
					break;
				}
			}
			if (ops[j].op == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count = count + 1;
		}
	}
	return (count);
}
