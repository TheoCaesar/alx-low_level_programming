#include "main.h"

/**
 * * print_rev - check the code
 * * @s: param s
 * * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
			break;
		count++;
	}

	int count_2;
	char rev_s[100];
	int num;
	int c;

	num = 0;

	count_2 = count;

	while (count)
	{
		rev_s[num] = s[count - 1];
		count--;
		num++;
	}

	/* int c; */

	for (c = 0; c < count_2; c++)
	{
		if (rev_s[c] == '\0')
			break;
		putchar(rev_s[c]);
	}

	putchar('\n');
}

