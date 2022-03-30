#include "main.h"

/**
 * _pow_recursion - value of an int raised to the power of another int
 * @x: pointer to value to be raised
 * @y: pointer to the value to be raised by (power)
 *
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
