#include "main.h"
#include <string.h>

/**
 * leet -  encodes a string into 1337.
 * @s: string to code
 * Return: the enconde string.
 */
char *leet(char *s)
{
	unsigned long int i, j;
	char alp[5] = { 'A', 'E', 'O', 'T', 'L' };
	char num[5] = { '4', '3', '0', '7', '1' };

	for (i = 0; s[i] != '\0'; i++)
	{
	j = 0;
	for (; j < strlen(num); j++)
	{
	if (s[i] == alp[j] || s[i] - 32 == alp[j])
	s[i] = num[j];
	}
	}
	return (s);
}
