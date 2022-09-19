#include "main.h"
/**
 * swap_int - swap two integers
 *
 * @n: first integer
 *
 * @n: second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
		*a = *b;
		*b = tmp;
}
