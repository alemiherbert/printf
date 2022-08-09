#include <stdlib.h>
#include "main.h"


/**
 * _vprinf - prints formatted output, using the variable argument list
 * @format: the string to be formatted
 * @args: the list of variadic arguments
 *
 * Return: number of chars printed
 */
int _vprintf(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				count += _putc(format[i]);

			/* character checks */
		}
		else
		{
			count += _putc(format[i]);
		}

		i++;
	}

	return (count);
}