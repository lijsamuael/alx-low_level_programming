#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the entryof the program
 * @argc: the numberof the arguments
 * @argv: the array of the arguments
 * Return: an integer
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
