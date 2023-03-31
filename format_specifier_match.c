#include "main.h"
/**
 * format_specifier - selects correct function
 * @j: iterator
 * format_specifier_match - Selects correct function
 * @list: Arguments
 * @spec: Character corresponding to printf specifier (format[i + 1])
 * Return: Pointer to selected function or length of string printed
*/
specifier_t format_specifier(int j)
{
	specifier_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},	
		{"NULL, NULL"},
	};
					/* prototypes in main.h*/
	return(ops[j]);
	
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
