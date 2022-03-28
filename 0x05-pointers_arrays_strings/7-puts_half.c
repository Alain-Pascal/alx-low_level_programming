#include "main.h"
/* for strlen() */
#include <string.h>

/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to where the string is stored
 *
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int half = len / 2;

	/* check if number of characters is odd */
	if ((len % 2) != 0)
		half++;

	/* printing secong half of the string */
	for (i = half ; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
