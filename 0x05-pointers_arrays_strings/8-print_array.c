#include "main.h"
#include <stdio.h>

/**
 * * print_array - print `n` elements of an array of integers
 * * @a: param
 * * @n: param2
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != 4)
		{
			_putchar(44);
			_putchar(32);
		}
	}
	_putchar('\n');
}
