#include "main.h"
#include <stdio.h>

/**
 * * _strlen - check the code
 * * @s: param s
 * * Return: Always 0.
 */
int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}

	return (count);
}
