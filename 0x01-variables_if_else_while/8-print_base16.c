#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int digit;

	/* digits */
	for (digit = 0 ; digit <= 9 ; digit++)
	{
		putchar('0' + digit);
	}

	/* letters */
	for (letter = 'a' ; letter <= 'f' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
