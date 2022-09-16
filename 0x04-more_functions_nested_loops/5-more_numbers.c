#include "main.h"

/**
 * more_numbers - loop 10 times prtinting 0 to 9 each time
 *
 * Return: void
 */
oid more_numbers(void)
{
	int i;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				int fn, ln;

				fn = i / 10;
				ln = i % 10;
				int c;
				int arr[] = {1, ln};

				for (c = 0; c < 2; c++)
					_putchar(arr[c] + '0');
			}
			else
				_putchar(i + '0');
		}
		putchar('\n');
	}
}
