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
 *print_c - prints char
 *@list: list of arg
 *Return: 1 on success
 */

int print_c(va_list list)
{
		_putchar(va_arg(list, int));
		return (1);
}

/**
  *print_s - prints string
  *@list: list of arguments
  *Return: string length
  */

int print_s(va_list list)
{
	int i = 0;
	char *c = va_arg(list, char *);

	if (c == NULL)
	{
		c = "(null)";
	}

	for (; c[i]; i++)
	{
		_putchar(c[i]);
	}

	return (i);
}

/**
 *print_i - prints integer
 *@list: list
 *Return: int
 */

int print_i(va_list list)
{
	int i = 0;
	int n = va_arg(list, int);
	int div = 1; /* divide the integer into digits */
	int d; /*store the current digit*/
	unsigned int aux; /*handle the absolute value of the integer */

	if (n < 0)
	{
		_putchar('-');
		aux = -n;
		i++;
	}
	else
	{
		aux = n;
	}

	/* Determine the divisor needed to get the first digit */
	while (aux / div >= 10)
	{
		div = div * 10;
	}

	while (div > 0)
	{
		d = aux / div;/* Get the current digit by dividing the aux variable by the divisor */
		_putchar(d + '0');
		aux %= div;/* Update the auxiliary value by removing the current digit */
		div /= 10;/* Update the divisor by dividing it by 10 to get the next digit */
		i++;
	}

	return (i);
}



/**
 *print_p - prints percent
 *@list: list
 *Return: 1
 */

int print_p(va_list list __attribute__((unused)))
{

	_putchar('%');
	return (1);
}
