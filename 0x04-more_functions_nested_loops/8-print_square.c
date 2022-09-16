#include "main.h"

/**
 * print_square - this is aesthetics
 * @size: square shape
 */
void print_square(int size)
{
	int i, n;

	for (n = 0; n < size ; n++)
	{
		for (i = 0; i < size ; i++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
