#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: Prints all possible different combinations of tow digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int dec;
	int unit;

	n = 0;
	while (n < 100)
	{
		/* tens */
		dec = n / 10;
		/* units */
		unit = n % 10;

		if (dec < unit)
		{
			putchar(dec + '0');
			putchar(unit + '0');

			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');

	return (0);
}
