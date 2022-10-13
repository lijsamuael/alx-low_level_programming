#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints the strings passed as argument
 * @separator: a string separator
 * @n: number of arguments passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char*);
			if (i == n - 1)
			{
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
			}
			else
			{
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s%s", str, separator);
			}
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char*);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		printf("\n");
	}
	va_end(ap);
}
