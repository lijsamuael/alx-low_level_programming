#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	srand(time(0));

	int n  = rand();

	int nl = n % 10;

	if (nl > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nl);
	else if (nl == 0)
		printf("Last digit of %d is %d and is 0\n", n, nl);
	else if (nl < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nl);

	return (0);

}
