#include <stdio.h>

/**
 * main - print program total args passed to it
 * @argc: - argument count
 * @argv:- argument vector
 * Return:  always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
