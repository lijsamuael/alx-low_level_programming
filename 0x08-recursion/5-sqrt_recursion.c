#include "main.h"

/**
 * _sqrt - checks for the square root of i
 * @n:guess at sqrt
 * @i: find sqrt of
 *
 * Return: -1 or sqrt of i
 */

int _sqrt(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (_sqrt(n + 1, i));
}
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: input number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
