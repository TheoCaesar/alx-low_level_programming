#include "main.h"

/**
 * _isalpha - alphabets upper case fxn
 *
 * @c: character to be tested
 *
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
