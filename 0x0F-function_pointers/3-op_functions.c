#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - addition
 * @a: number 1
 * @b: number 2
 * Return: the addend of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substraction
 * @a: number 1
 * @b: number 2
 * Return: the substraction of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: number 1
 * @b: number 2
 * Return: the multiplication of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: number 1
 * @b: number 2
 * Return: the questiont of the two numbers
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modules
 * @a: number 1
 * @b: number 2
 * Return: the modules of the two numbers
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
