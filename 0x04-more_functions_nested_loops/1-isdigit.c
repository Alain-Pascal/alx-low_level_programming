/* for isdigit() */
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - uppercase check
 * @c: param to be ckecked
 *
 * Description: A function that checks for a digit
 *
 * Return: 1 digit is found. 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
