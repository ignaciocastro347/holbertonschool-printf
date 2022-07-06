#include "main.h"
#include <stdarg.h>

/**
 * _printf - main function of printf
 * @format: string value to print and specify type of next args
 * Return: amount of printed character
 */

int _printf(const char *format, ...)
{
	int i = 0, sum = 0;
	char *temp;
	va_list ap;

	if (!format)
		return (-1);
	va_start(ap, format);
	for (; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				if (i == 1)
					return (-1);
				break;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(ap, int));
					sum++;
					break;
				case 's':
					temp = va_arg(ap, char*);
					sum += _putchar_s(temp ? temp : "(null)");
					break;
				case '%':
					_putchar('%');
					sum++;
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					sum += 2;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(ap);
	return (sum);
}
