#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: - input
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
