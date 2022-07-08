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
 * ve_decimal - prints a decimal recursively
 * @n: decimal
 * @base: base
 * Return: the amount of decimal numbers
 */
int recursive_number(unsigned int n, unsigned int base, char* digits)
{
	int sum;

	if (n > (base - 1))
	{
		sum = recursive_number(n / base, base, digits);
		_putchar(digits[n % base]);
		return (sum + 1);
	}
	_putchar(digits[n]);
	return (1);
}
/**
 *print_decimal - prints a decimal
 *@list: va_list value
 *Return: the amount of decimal numbers
 */
int print_decimal(va_list list)
{
	int n = va_arg(list, int);
	int amount = 0;

	if (n < 0)
	{
		_putchar('-');
		amount++;
		n = n * -1;
	}
	amount += recursive_number((unsigned int)(n), 10, "0123456789");
	return (amount);
}
