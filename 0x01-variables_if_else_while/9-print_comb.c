#include <stdio.h>

/**
 * main - Prints all possible combination of single-digit numbers
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
		if (number == 9)
			break;
		putchar(',');
		putchar(' ');

		number++;
	}
	putchar('\n');

	return (0);
}
