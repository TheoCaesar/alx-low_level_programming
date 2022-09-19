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
	int num = 0;
	char rev_s[300];


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
		half = (count - 1) / 1;

	for (i = half; i < count; i++)
		_putchar(rev_s[i]);

	_putchar('\n');
}

