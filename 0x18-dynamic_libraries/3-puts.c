#include "main.h"

/**
 * * _puts - check the code
 * @str: pointer param
 * * Return: Always 0.
 */

void _puts(char *s)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
		_putchar(s[i]);
	}
	_putchar('\n');
}
