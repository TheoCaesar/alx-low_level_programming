#include "main.h"

/**
 * _islower - check if lowercase
 *
 * @c: char to be checked
 *
 * Return: Alwasy 0
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
