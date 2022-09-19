#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: number 1
 * @b: number 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
