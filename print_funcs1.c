#include "main.h"
#include <stdlib.h>
#include <stdio.h>


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

/**
  * _print_int_binary - Prints a int converted to binary
  * @args: A list of variadic arguments
  *
  * Return: The number of printed digits
  */
int _print_int_binary(va_list args)
{
	unsigned int x = 0;
	int b = 0, aux = 0;

	aux = va_arg(args, int);
	x = aux;
	if (aux < 0)
	{
		_putc('1');
		aux = aux * -1;
		x = aux;
		b += 1;
	}
	while (x > 0)
	{
		x = x / 2;
		b++;
	}
	_recursion_int_binary(aux);
	return (b);
}

/**
  * _recursion_int_binary - Prints a binary number
  * @a: integer to print
  *
  * Return: Nothing
  */
void _recursion_int_binary(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		_recursion_int_binary(t / 2);
	_putc(t % 2 + '0');
}
