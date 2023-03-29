nclude "main.h"

/**
 * _printf - Writes output to stdout
 * @format: String to print
 *
 * Return: Number of characters printed
*/

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int string_lenght = 0;
	
	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for ( i = 0; format[i] != '\0'; i++)
		{
	if (format[i] == '%')
	{
		if (format[i + 1] == '\0')
			return (-1);
	string_lenght += get_function_print(args, format[i + 1]);
	i++
	}

}
	else 
	{
	_putchar(format[i];
	
	string_lenght++;
}

	}
	va_end(args);		
	return (string_lenght);
}
