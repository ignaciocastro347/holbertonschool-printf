#include "main.h"
/**
 *get_print_function - map each format specification with a function
 *@c - char value
 *Returns: pointer to function
*/
int (*get_print_function(char a))(va_list)
{
	pfunc_t map[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percentage},
		{NULL, NULL}
	};
	int i;

	for (i = 0; map[i].f ; i++)
		if (map[i].c == a)
			return (map[i].f);
	return (0);
}
