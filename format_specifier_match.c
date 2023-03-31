#include "main.h"
/**
<<<<<<< HEAD
 * format_specifier - selects correct function
 * @j: iterator
=======
 * format_specifier_match - Selects correct function
 * @list: Arguments
 * @spec: Character corresponding to printf specifier (format[i + 1])
 *
>>>>>>> 9253a5f1a65dfd5f2eb7dc69f042834825d25317
 * Return: Pointer to selected function or length of string printed
*/

<<<<<<< HEAD
specifier_t format_specifier(int j)
{
	specifier_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
=======
	int format_specifier_match(va_list list, char spec)
{
	specifier_t caracter[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_int},
		{"%", print_p},
>>>>>>> 9253a5f1a65dfd5f2eb7dc69f042834825d25317
		{NULL, NULL}
	};  					/* prototypes in main.h*/

<<<<<<< HEAD
	return(ops[j]);
=======
	
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
>>>>>>> 9253a5f1a65dfd5f2eb7dc69f042834825d25317
}
