#include <stdio.h>
#include <stdlib.h>

/**
 * main - mulitiplies last 2 params passed in command line
 * @argc: count of args
 * @argv: vector of args
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}



