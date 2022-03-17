#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two tow-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	int dec_first, unit_first, dec_second, unit_second;

	for (i = 0; i < 100; i++)
	{
		/* first tens */
		dec_first = i / 10;
		/* first units */
		unit_first = i % 10;

		for (j = 0; j < 100; j++)
		{
			/* second tens */
			dec_second = j / 10;
			/* second units */
			unit_second = j % 10;

			if (dec_first < dec_second || (dec_first == dec_second
						&& unit_first < unit_second))
			{
				putchar(dec_first + '0');
				putchar(unit_first + '0');
				putchar(' ');
				putchar(dec_second + '0');
				putchar(unit_second + '0');

				if (!(dec_first == 9 && unit_first == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
