#include "main.h"
/**
 * format_specifier - selects correct function
 * @j: iterator
 * format_specifier_match - Selects correct function
 * @list: Arguments
 * @spec: Character corresponding to printf specifier (format[i + 1])
 * Return: Pointer to selected function or length of string printed
*/


int format_specifier(va_list list, char spec)
{
	specifier_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
	/*	{"%", print_p}, */
		{NULL, NULL}
	};  					/* prototypes in main.h*/

	
	int i = 0;

	while (ops[i].op && spec)
	{	/*check that spec matches the functions*/
		if (ops[i].op[0] == spec)
		{	/* if there is a coincidence, take the correct function */
			return ((ops[i].f)(list));
		}
		i++;
}


	return();
}
