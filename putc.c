#include <unistd.h>

/**
 * _putc - function that prints a character
 * @c: the character to print
 * Return: -1 if failed
 */
int _putc(char c)
{
	return (write(1, &c, 1));
}
