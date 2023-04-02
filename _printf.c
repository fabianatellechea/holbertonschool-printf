#include "main.h"
#define BUFFER 1024

/**
 * _printf - Writes output to stdout
 * @format: string to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	int len = 0;
	int (*f)(va_list);

	va_start(list, format);

	if (format == NULL)
	{
		return (-1);
	}

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			f = specifier_match(format[i + 1]);

			if (f != NULL)
			{
				len += f(list);
				i += 2;
				continue;
			}
		}

		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}

		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(list);
	return (len);
}
