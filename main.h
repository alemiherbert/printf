#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>


int _putc(char c);
int _print_char(va_list args);
int _print_string(va_list args);

int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);

#endif /* _MAIN */