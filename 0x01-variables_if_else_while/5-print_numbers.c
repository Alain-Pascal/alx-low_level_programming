#include <stdio.h>

/**
 * main - Prints all single digits numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');

	return (0);
}
