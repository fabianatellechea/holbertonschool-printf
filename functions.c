#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 *print_c - print char
 *@list: list of arg
 *Return: 1 on success
 */

int print_c(va_list list)
{
		_putchar(va_arg(list, int));
		return (1);
}

