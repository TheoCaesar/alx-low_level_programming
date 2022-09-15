#include "main.h"

/**
 * positive_or_negative - check if val is +ve/-ve
 *
 * @i: value to be checked
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
	return;
}
