#ifndef PRINTF_H
#define PRINTF_H
int _putchar(char);
int _putchar_s(char *s);
int _printf(const char *format, ...);

/**
 *print_function - Struct print
 *@c: The format specification
 *@f: The function associated
 */
typedef struct print_function
{
	char c;
	int (*f)(va_list);
} pfunc_t;

int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int (*get_print_function(char a))(va_list);
#endif































