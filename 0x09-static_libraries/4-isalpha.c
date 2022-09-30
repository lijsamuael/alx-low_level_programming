#include "main.h"

/**
 * _isalpha - determines if the given character is aplhabetice
 * @c: the character to be evaltaed as alphabetic or not
 *
 * Return: 0 is the letter is alphabptic otherwise 1
 */
int _isalpha(int c)
{
	int lower, upper, count;

	count = 0;
	for (lower = 97; lower <= 122; lower++)
	{
		if (c == lower)
		{
			count++;
			break;
		}
	}
	for (upper = 65; upper <= 91; upper++)
	{
		if (c == upper)
		{
			count++;
			break;
		}
	}
	if (count == 0)
		return (0);
	else
		return (1);
}
