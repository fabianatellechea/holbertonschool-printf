_printf

La función _printf() toma una cadena de formato (format) y cualquier número de argumentos adicionales especificados por la cadena de formato. La cadena de formato puede contener caracteres de formato especiales que indican que se debe imprimir un tipo específico de datos (por ejemplo, %d para un número entero o %s para una cadena).

El código recorre la cadena de formato carácter por carácter, buscando caracteres de formato especiales que se indiquen con el símbolo %. Si se encuentra un carácter de formato, se llama a una función get_function_print(o la que se haya creado con struc) para imprimir los datos que corresponden al tipo de formato.

En caso contrario, se imprime el carácter normal y se actualiza el número total de caracteres impresos. Si se encuentra un carácter de formato inválido o no se especifica un argumento correspondiente para un carácter de formato, la función devuelve -1.

El código utiliza la biblioteca estándar de C stdarg.h para trabajar con un número variable de argumentos, y usa la función va_start() para inicializar una lista de argumentos variables, y va_end() para finalizar la lista de argumentos variables.
