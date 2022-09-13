/*
 * File : 0-putchar.c
 */

#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{

		char c[] = "_putchar";
		int i;

		for (i = 0; i <= 7; i++)
		{
			_putchar(char c[i]);
		}
		_putchar('\n');
		return (0);
}
