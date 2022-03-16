#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: A function that prints the alphabet in lower case
 *
 */
void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <=  'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
