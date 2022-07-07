#include <stdarg.h>
#include "main.h"

/**
 *print_char - prints a char
 *@list: va_list value
 *Return: Always 1
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
/**
 *print_string - prints a string
 *@list: va_list value
 *Return: the number of the string chars
 */
int print_string(va_list list)
{
	char *temp = va_arg(list, char*);

	return (_putchar_s(temp ? temp : "(null)"));
}
/**
 *print_percent - prints a percentage sign
 *@list: va_list value
 *Return: Always 1
 */
int print_percent(va_list list)
{
	if (!list)
		list = NULL;
	_putchar('%');
	return (1);
}
/**
 *recursive_decimal - prints a decimal recursively
 *@n: decimal
 *@sum: counter
 *Return: the amount of decimal numbers
 */
int recursive_decimal(int n, int sum)
{
	if (n > 9)
	{
		sum = recursive_decimal(n / 10, sum);
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
	return (sum + 1);
}
/**
 *print_decimal - prints a decimal
 *@list: va_list value
 *Return: the amount of decimal numbers
 */
int print_decimal(va_list list)
{
	return (recursive_decimal(va_arg(list, int), 0));
}