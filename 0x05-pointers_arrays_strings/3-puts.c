#include "main.h"

/**
 * * _puts - check the code
 * @str: pointer param
 * * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
	/*	else*/
		putchar(str[i]);
	}
	putchar('\n');
}
