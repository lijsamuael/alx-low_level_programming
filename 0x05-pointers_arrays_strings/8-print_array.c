#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @n: number
 * @a: stiring
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
