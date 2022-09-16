#include "main.h"

/**
 * print_diagonal - a diagonal line
 *
 * @n: input argument
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int a;

		for (a = 0; a < i; a++)
			_putchar(32);
		if (a == i)
		{
			_putchar(92);
			_putchar('\n');
		}
	}

}
