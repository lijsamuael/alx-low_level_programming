#include "main.h"

/**
 * _isupper - cheks if the character is lowercase
 * @c: the charater to be determined if it is lower or not
 * Return: 1 if losercase or 0 if not
 */
int _isupper(int c)
{
	int alpha;

	int count;

	count = 0;

	for (alpha = 65; alpha <= 90; alpha++)
	{
		if (c == alpha)
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
