#include <stdio.h>
#include <math.h>

/**
 * main - find largest prime factor
 *
 * Description: prints the largest prime factor of a  numbers
 *
 * Return: 0
 */
int main(void)
{
	long int num, i, pf;

	pf = -1;
	num = 612852475143;

	while (num % 2 == 0)
	{
		pf = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			pf = i;
			num /= i;
		}
	}
	if (num > 2)
		pf = num;

	printf("%ld\n", pf);

	return (0);
}
