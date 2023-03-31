#include "main.h"
/**
 * format_specifier - selects correct function
 * @j: iterator
 * Return: Pointer to selected function or length of string printed
*/

specifier_t format_specifier(int j)
{
	specifier_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	return(ops[j]);
}
