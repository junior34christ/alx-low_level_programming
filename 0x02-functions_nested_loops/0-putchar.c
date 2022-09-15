/*
 * File : 0-putchar.c
 */

#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: always 0.
 */

#include "main.h"

int main(void)
{
	        char *c = "_putchar";

			while (*c)
		{
		        _putchar(*c);
		        c++;
		}

		_putchar('\n');

		return (0);

}
