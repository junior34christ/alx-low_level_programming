/*
 * File : 0-putchar.c
 */

#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Description; print _putchar
 *
 * Return: always 0 (Success);
 */

int main(void)
{
	int tab[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;
	
	for (i = 0; i < 8, i++)
	{
		_putchar(tab[i]);
	}
	_putchar(10);

	return (0);
}
