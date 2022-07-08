#include "main.h"
/**
 * print_binary - print a binary number
 * @list: va_list value
 * Return: the amount of binary numbers
 */
int print_binary(va_list list)
{
	return (recursive_number(va_arg(list, int), 2, "01"));
}
/**
 * print_octal - print a octal number
 * @n: number
 * Return: the amount of octal numbers
 */
int print_octal(va_list list)
{
	return (recursive_number(va_arg(list, int), 8, "01234567"));
}
/**
 *print_hex - print a hexadecimal number
 * @list: va_list value
 * Return: the amount of hexadecimal numbers
 */
int print_hex(va_list list)
{
	return (recursive_number(va_arg(list, int), 16, "0123456789ABCDEF"));
}
