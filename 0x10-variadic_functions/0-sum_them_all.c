#include "variadic_func.h"

/**
 * sum_them_all - sums vals in variadic args
 * @n : variadic args
 * @... : elipsis for unlimitied args
 * Return:sum of params
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i, sum;

	va_start(arglist, n);

	sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);

	va_end(arglist);
	return (sum);
}
