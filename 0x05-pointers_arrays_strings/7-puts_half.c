#include "main.h"

/**
 * * puts_half - check the code
 * * @str: param
 * * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int count = 0;
	int half;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		count++;
	}


	/*	Step 2 - get half count*/
	if (count % 2 == 0)
		half = count / 2;
	else
		half = (count - 1) / 2;

	for (i = half; i < count; i++)
		_putchar(str[i]);

	_putchar('\n');
}

