#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print_char - this function prints a char
 * @args: a list of variadic arguments to be printed
 * Return: 1
 */
int _print_char(va_list args)
{
	_putc(va_arg(args, int));
	return (1);
}
