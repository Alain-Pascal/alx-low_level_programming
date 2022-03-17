#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, cen, dec, unit;

	for (n = 0; n < 1000; n++)
	{
		/* hundreds */
		cen = n / 100;
		/* tens */
		dec = (n / 10) % 10;
		/* units */
		unit = n % 10;

		if (cen < dec && dec < unit)
		{
			putchar(cen + '0');
			putchar(dec + '0');
			putchar(unit + '0');

			if (n < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
