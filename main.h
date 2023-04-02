#ifndef MAIN_H
#define MAIN_H
#define BUFFER 1024

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/**
 *struct ops - specifier
 *@op: options
 *@f: function pointer
 */

typedef struct ops
{
	char *op;
	int (*f)(va_list list);
} specifier_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list list);
int print_s(va_list list);
int print_i(va_list list);
int (*specifier_match(char format))(va_list);
int print_p(va_list list);

#endif
