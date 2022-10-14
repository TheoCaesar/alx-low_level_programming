#include "variadic_func.h"

/**
 * sum_them_all - sums vals in variadic args
 * @n : variadic args
 * @... : elipsis for unlimitied args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	int i, sum;

	va_start(arglist, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);

	va_end(arglist);
	return (sum);
}
