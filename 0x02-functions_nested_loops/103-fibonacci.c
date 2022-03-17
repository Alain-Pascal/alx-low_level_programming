#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints Fibonacci numbers
 * It finds and prints the sum of the even-valued terms
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float totalSum;

	sum = 0;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			totalSum += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", totalSum);
	return (0);
}
