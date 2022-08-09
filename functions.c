#include "main.h"

/**
 * printnum - function for counting
 * @n: number that gets added recursively
 * Return: the count
 */

int printnum(int n)
{
	int count = 0;
	unsigned int num;
	unsigned int dig;
	unsigned int i;
	unsigned int long_num;

	long_num = n;
	if (n < 0)
	{
		count++;
		long_num = long_num * -1;
		_putchar('-');
	}
	if (long_num == 0)
	{
		count++;
		_putchar('0');
		return (count);
	}
	i = 1;
	while (((long_num / i) > 9))
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = long_num / i;
		dig = num % 10;
		count++;
		_putchar(dig + '0');
		i =  (i / 10);
	}
	return (count);
}

/**
 * print_d - prints numbers
 * @list: list of arguments
 * Return: the count
 */

int print_d(va_list list)
{
	int output;
	int count;

	output = va_arg(list, int);
	count = printnum(output);
	return (count);
}

/**
 * print_r - prints in reverse
 * @list: list of arguments
 * Return: the length
 */

int print_r(va_list list)
{
	char *str = "%r";
	int len = _strlen(str);

	write(1, str, len);
	va_end(list);
	return (len);
}
