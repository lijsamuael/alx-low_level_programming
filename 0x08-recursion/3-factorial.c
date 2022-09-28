#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: a number
 * Return: the factorial of a number
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
