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
	int c;
	int count_2 = count;
	int num = 0;
	char rev_s[100];


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
		half = (count / 2) + 1;

	while (count)
	{
		rev_s[num] = str[count - 1];
		count--;
		num++;
	}

	for (i = 0; i < half; i++)
		putchar(rev_s[i]);
}

