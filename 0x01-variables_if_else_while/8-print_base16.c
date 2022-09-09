#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
