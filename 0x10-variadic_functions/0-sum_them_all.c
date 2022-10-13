#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum up all the arguments passed
 * @n: the number of arguments
 * Return: the sum of the arguments passed
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;

	va_list ap;

	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
