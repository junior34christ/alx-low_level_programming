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

		char [] = "_putchar";
		int i;

		for (i = 0; i <= 7; i++)
		{
			putchar([i]);
		}
		_putchar('\n');
		return (0);
}