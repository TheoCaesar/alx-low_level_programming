#include "main.h"

/**
 * more_numbers - loop 10 times prtinting 0 to 9 each time
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		putchar('\n');
	}
}
