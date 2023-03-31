
/**
 * format_specifier_match - Selects correct function
 * @args: Arguments
 * @spec: Character corresponding to printf specifier (format[i + 1])
 *
 * Return: Pointer to selected function or length of string printed
*/
#include "main.h"

	int format_specifier_match(va_list args, char spec)
{
	specifier_t caracter[] = {
		{"c", },
		{"%", },
		{"s", },
		{"d", },
		{"i", },
		{NULL, NULL}
	};

	





	return();
}
