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
            if (_check_char(format[i]) == 0)
			{
				count = _print_invalid_spec(format[i - 1], format[i], count);
			}
			else
			{
				count += _print_spec(format[i], args);
			}
		}
		else
		{
			count += _putc(format[i]);
		}

		i++;
	}

	return (count);
}

/**
 * _check_spec - this function checks for the specifier in the string 
 * @_spec: the specifier to check for 
 * 
 * Return 1 if present, else 0
 */
int _check_char(char _type)
{
	char _types[] = {'c', 's', '%'};
	int i = 0;

	while (_types[i])
	{
		if (_types[i] == _type)
			return (1);
		i++;
	}
	return (0);
}

