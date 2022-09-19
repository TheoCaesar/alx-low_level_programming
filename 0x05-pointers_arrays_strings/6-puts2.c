#include "main.h"

/**
 * * puts2 - check the code
 * * @str: param
 * * Return: Always 0.
 */


void puts2(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

