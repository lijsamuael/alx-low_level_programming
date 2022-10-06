#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * int_calloc - special calloc but 4 int arrays
  * @nmemb: n memb
  * @size: size of array
  * Return: int *
  */
int *int_calloc(int nmemb, unsigned int size)
{
	/* declarations */
	int *p, n;
	/* checking inputs */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* malloc the space & check for fail */
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	/* calloc */
	for (n = 0; n < nmemb; n++)
		p[n] = 0;
	return (p);
}

/**
  * mult - multiplication
  * @product: int * 4 answer
  * @n1: string num1
  * @n2: string num2
  * @len1: len num1
  * @len2: len num2
  * Return: void
  */
void mult(int *product, char *n1, char *n2, int len1, int len2)
{
	/* declarations */
	int i;
	int j;
	int f1, f2;
	int sum;
	/* the long math */
	for (i = len1 - 1; i >= 0; i--)
	{
		sum = 0;
		f1 = n1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			f2 = n2[j] - '0';
			sum += product[i + j + 1] + (f1 * f2);
			product[i + j + 1] = sum % 10;
			sum /= 10;
		}
		if (sum > 0)
			product[i + j + 1] += sum;
	}
	for (i = 0; product[i] == 0 && i < len1 + len2; i++)
	{}
	if (i == len1 + len2)
		_putchar('0');
	for (; i < len1 + len2; i++)
		_putchar(product[i] + '0');
	_putchar('\n');
}

/**
  * is_valid - is the number a valid one
  * @num : char string num
  * Return: int, 1 if true 0 if false
  */
int is_valid(char *num)
{
	/* declarations */
	int i;
	/* checking for ints */
	for (i = 0; num[i]; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
	return (1);
}
/**
  * err - errors r us
  * @status: error code 4 exit
  * Return: void
  */
void err(int status)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(status);
}
/**
  * main - getting the args
  * @argc: args #
  * @argv: arg array
  * Return: 0
  */
int main(int argc, char **argv)
{
	/* declarations */
	int i, j, len1 = 0, len2 = 0;
	int *res;
	/* too many args? too few? */
	if (argc != 3)
	{
		err(98);
	}
	/* using isvalid */
	for (i = 1; i < argc; i++)
	{
		if (!(is_valid(argv[i])))
			err(98);
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				len1++;
		}
		if (i == 2)
		{
			for (j = 0; argv[i][j]; j++)
				len2++;
		}
	}
	res = int_calloc(len1 + len2, sizeof(int));
	if (res == NULL)
		err(98);
	mult(res, argv[1], argv[2], len1, len2);
	free(res);
	return (0);
}
