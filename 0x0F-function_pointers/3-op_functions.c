#include "3-calc.h"

/**
 * op_add - addition operation
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first integer
 * @b: second integer
 *
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient of @a by @b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - mudulos operation
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of @a by @b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
