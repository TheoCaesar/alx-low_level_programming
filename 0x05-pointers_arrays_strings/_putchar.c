#include <unistd.h>
/**
 * _putchar - is a substitute for our original putchar fxn
 *
 * @c: character to be printed
 *
 * Return: Always 0 (Success)
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
