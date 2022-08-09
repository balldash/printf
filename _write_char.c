#include "main.h"

/**
 * _write_char - writes a character to stdout
 * @c: the character to print
 * Return: on success 1.
 * On errro, -1
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
