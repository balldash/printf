#ifndef MAIN_F
#define MAIN_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 * struct pr - defines a structure
 * for symbols and functions
 * @sym: the operator
 * @f: the function associated
 */

typedef struct pr
{
	char *op;
	int (*f)(va_list);
} pr_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_i(va_list list);
int print_d(va_list list);
int print_r(va_list list);
int print_mod(va_list list);
int print_d(va_list list);
int _strlen(char *s);
int _function(const char *format, pr_f ops[], va_list ap);

#endif
