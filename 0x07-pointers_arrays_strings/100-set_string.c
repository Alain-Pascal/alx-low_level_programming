#include "main.h"

/**
 * set_string -sets the value of a pointer to a char.
 * @s: Double pointer to a char
 * @to: Pointer to the char to set s to
 *
 * Description: This function takes a double pointer 's' and an pointer 'to'
 * It modifies the value pointed to by 's' to be the address held by 'to'
 */

void set_string(char **s, char *to)
{
	*s = to;
}
