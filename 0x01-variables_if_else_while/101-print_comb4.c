#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
	int i, a, c;

	for (i = 0; i < 8; i++)
	{
		for (a = i + 1; a < 9; a++)
		{
			for (c = a + 1; c < 10; c++)
			{
				putchar((i % 10) + '0');
				putchar((a % 10) + '0');
				putchar((c % 10) + '0');

				if (i == 7 && a == 8 && c == 9)
					continue;

				putchar(',');
				putchar (' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
