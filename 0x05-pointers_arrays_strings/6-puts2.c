#include "main.h"

/**
 * * puts2 - check the code
 * * @str: param
 * * Return: Always 0.
 */


void puts2(char *str)
{
	int i;
	int count = 0;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0' || count == 223)
			break;
		putchar(str[i]);
		i++;
		count++;
	}
	putchar('\n');
}

