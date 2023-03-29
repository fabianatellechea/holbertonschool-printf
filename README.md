_printf

La función _printf() toma una cadena de formato (format) y cualquier número de argumentos adicionales especificados por la cadena de formato. La cadena de formato puede contener caracteres de formato especiales que indican que se debe imprimir un tipo específico de datos (por ejemplo, %d para un número entero o %s para una cadena).

El código recorre la cadena de formato carácter por carácter, buscando caracteres de formato especiales que se indiquen con el símbolo %. Si se encuentra un carácter de formato, se llama a una función get_function_print(o la que se haya creado con struc) para imprimir los datos que corresponden al tipo de formato.

En caso contrario, se imprime el carácter normal y se actualiza el número total de caracteres impresos. Si se encuentra un carácter de formato inválido o no se especifica un argumento correspondiente para un carácter de formato, la función devuelve -1.

El código utiliza la biblioteca estándar de C stdarg.h para trabajar con un número variable de argumentos, y usa la función va_start() para inicializar una lista de argumentos variables, y va_end() para finalizar la lista de argumentos variables.



La función recibe una cadena de formato (format) y una lista variable de argumentos (args) que se especifican con puntos suspensivos (...) en la definición de la función.
Se declara una variable i de tipo unsigned int y strlen de tipo int. La variable i se usa para iterar a través de la cadena de formato y la variable strlen se usa para contar el número de caracteres que se imprimen.
Se inicializa una lista variable de argumentos usando va_start(), que toma la dirección del último argumento antes de los puntos suspensivos.
Si la cadena de formato es NULL, la función devuelve -1. De lo contrario, se realiza un bucle for para recorrer la cadena de formato.
Si un carácter % se encuentra en la cadena de formato, se comprueba si hay un especificador válido después del carácter %. Si no hay un especificador válido, se devuelve -1. Si se encuentra un especificador válido, se llama a la función get_function_print(), que realiza una acción correspondiente según el especificador, y actualiza la variable strlen con el número de caracteres impresos.
Si no se encuentra un carácter % en la cadena de formato, se imprime el carácter actual y se actualiza la variable strlen.
Después de recorrer la cadena de formato, se llama a va_end() para finalizar la lista variable de argumentos.
Finalmente, la función devuelve strlen, que contiene el número total de caracteres impresos.
