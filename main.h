#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struc specifiers -Struct specifiers
 * @specier: conversion specifier
 * @f: function pointer
 */
typedef struct specifiers
{
    char *specifier;
    int (*f)(va_list args);
}fmt_spec;

int _putc(char c);
int _print_char(va_list args);
int _print_string(va_list args);

int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);

int _print_spec(char format, va_list args);
int _print_invalid_spec(char prev_format, char format, int count);
int _print_integer(va_list args);
void _recursion_integer(int a);
int _print_int_binary(va_list args);
void _recursion_int_binary(int a);
int _check_char(char _type);


#endif /* _MAIN */