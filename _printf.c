#include "main.h"
#include <stddef.h>
/**
 * _printf - mimics printf
 * @format: identifier look for
 * Return: integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}
	};
	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		j = 1;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
			/*	goto Here;*/
			}
			else if (format[i] == '%' && format[i + 1] == '%')
			{
				len = len + print_37();
				i = i + 2;
			/*	goto Here;*/
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);

}
