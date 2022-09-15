#include "main.h"
/**
 * _isdigit - Printing small lettets
 * @c: a number
 * Return: whether the number is between o and  9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
