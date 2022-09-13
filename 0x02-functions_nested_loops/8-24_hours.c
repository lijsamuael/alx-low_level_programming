#include "main.h"
/**
 * jack_bauer - prints the minute of the hour
 *
 * Return: void
 */
void jack_bauer(void)
{
	int min1, hr1, min0, hr0;

	for (hr1 = 0; hr1 < 9; hr1++)
	{
		if (hr1 > 2)
			break;
		for (hr0 = 0; hr0 < 9; hr0++)
		{
			if (hr0 > 3)
				break;
			for (min0 = 0; min0 <= 9; min0++)
			{
				if (min0 > 5)
					break;
				for (min1 = 0; min1 <= 9; min1++)
				{
					_putchar('0' + hr1);
					_putchar('0' + hr0);
					_putchar(':');
					_putchar('0' + min0);
					_putchar('0' + min1);
					_putchar('\n');
				}
			}
		}
	}
}
