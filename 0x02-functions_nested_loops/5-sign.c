#include "main.h"
/**
 * print_sign - prints the sign of the number
 * @n: a number
 *
 * Return: 0,1,-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
