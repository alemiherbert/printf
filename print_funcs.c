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