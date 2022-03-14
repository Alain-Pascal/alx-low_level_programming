#include <stdio.h>

/**
 * main - Prints all single digits numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar('0' + number);
		number++;
	}
	putchar('\n');

	return (0);
}
