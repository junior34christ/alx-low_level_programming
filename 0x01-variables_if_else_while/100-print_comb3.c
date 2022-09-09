#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int i, a;

	for (i = 0; i < 9; i++)
	{
		for (a = i + 1; a < 10; a++)
		{
			putchar((i % 10) + '0');
			putchar((a % 10) + '0');

			if (i == 8 && a == 9)
				continue;

			putchar(',');
			putchar (' ');
		}
	}

	putchar('\n');

	return (0);
}
