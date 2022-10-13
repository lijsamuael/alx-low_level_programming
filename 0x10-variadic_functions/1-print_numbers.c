#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the arguments passed
 * @separator: a separator character cfor printing
 * @n: number of argumbents passed
 * Return: vo;id
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
				printf("%d", va_arg(ap, int));
			else
				printf("%d%s", va_arg(ap, int), separator);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(ap, int));
		printf("\n");
	}
	va_end(ap);
}
