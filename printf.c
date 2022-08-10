#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _printf - function that prints a formatted string
 * @format: the string to be printed
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _vprintf(format, args);
	va_end(args);
	return (length);
}
