
/**
 * format_specifier_match - Selects correct function
 * @args: Arguments
 * @spec: Character corresponding to printf specifier (format[i + 1])
 *
 * Return: Pointer to selected function or length of string printed
*/
#include "main.h"

	int format_specifier_match(va_list list, char spec)
{
	specifier_t caracter[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_int},
		{"%", print_p},
		{NULL, NULL}
	};  					/* prototypes in main.h*/

	
	int i = 0;

	while (caracter[i].op && spec)
	{	/*check that spec matches the functions*/
		if (caracter[i].op[0] == spec)
		{	/* if there is a coincidence, take the correct function */
			return ((caracter[i].f)(list));
		}
		i++;
}



	return();
}
