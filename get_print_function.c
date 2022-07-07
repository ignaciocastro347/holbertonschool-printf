#include "main.h"
/**
 *get_print_function - map each format specification with a function
 *@a: char value
 *Return: pointer to function
*/
int (*get_print_function(char a))(va_list)
{
	pfunc_t map[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_decimal},
		{'d', print_decimal},
		{'%', print_percent},
		{'\0', '\0'}
	};
	int i;

	for (i = 0; map[i].f ; i++)
		if (map[i].c == a)
			return (map[i].f);
	return (0);
}
