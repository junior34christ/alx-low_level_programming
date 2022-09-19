#include "main.h"

/**
 * _puts - prints a string
 *
 *@str: string to print
 *description: print a string
 *
 *On success: return the number of characters printed
 */

void _puts(char *str)
{
	while (*str)
	_putchar(*str++)
	_putchar('\n');
}
