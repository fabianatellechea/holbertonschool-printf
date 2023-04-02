#include "main.h"
#include <string.h>
/**
 * specifier_match - Selects correct function
 * @format: string
 * Return: Pointer to selected function or length of string printed
*/


int (*specifier_match(char format))(va_list)
{
	int i = 0;

	specifier_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{"%", print_p},
		{'\0', NULL}
	};

	while (ops[i].op)
	{
		if (*(ops[i].op) == format)
		{	/* if there is a coincidence, take the correct function */
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
