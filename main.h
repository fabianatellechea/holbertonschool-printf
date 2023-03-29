#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/**
 *struct op_t - specifier
 *@ops: options
 *@f: function pointer
 */

typedef struct ops
{
	char *op;
	int (*f)(va_list list);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(va_list arg);
int print_c(va_list list);
int print_s(va_list list);
int print_int(int n);
int print_d(va_list list);

#endif
