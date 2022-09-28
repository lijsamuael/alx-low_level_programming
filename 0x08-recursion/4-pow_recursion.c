#include "main.h"
/**
 * _pow_recursion - prints a number raised to some number as a power
 * @x: the base number
 * @y: the power
 * Return: a number raised to the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
