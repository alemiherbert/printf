#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print_char - this function prints a char
 * @args: a list of variadic arguments to be printed
 * 
 * Return: 1
 */
int _print_char(va_list args)
{
    _putc(va_arg(args, int));
    return (1);
}

/**
 * _print_string - this function prints a string
 * @args: a list of variadic arguments to print
 * 
 * Return: the length of the string
 */
int _print_string(va_list args)
{
    /* copy the string to print */
    char *arg = va_arg(args, char *);
    int i;

    for (i = 0; arg[i] != '\0'; i++)
    {
        _putc(arg[i]);  
    }
    return (i);
}

/**
  * _print_integer - prints a integer
  * @args: list of variadic arguments
  *
  * Return: length of the string
  */
int _print_integer(va_list args)
{
	int count = 1, val = 0;
	unsigned int aux = 0;

    /* copy the integer into an auxilliary variable */
	aux = va_arg(args, int);
	val = aux;
	if (val < 0)
	{
		_putc('-');
		val = val * -1;
		aux = val;
		count ++;
	}
	while (aux > 9)
	{
		aux = aux / 10;
		count++;
	}

	_recursion_integer(val);
	return (count);
}

/**
  * _recursion_integer - print an integer
  * @a: the integer to print
  *
  * Return: Nothing
  */
void _recursion_integer(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		_recursion_integer(t / 10);
	_putc(t % 10 + '0');
}