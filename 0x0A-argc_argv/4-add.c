#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds numbers passed to program
 * prints 0 if no number is passed, if a non
 * digit is passed to it, it prints "Error"
 * and returns 1;
 * @argc: args count
 * @argv: args vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
