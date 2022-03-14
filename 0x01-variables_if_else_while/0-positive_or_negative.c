#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - positive anything is better than negative nothing
 *
 * Description: This program will assign a random number to the variable n each
 * time it is executed.
 * Prints whether the number stored in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n <0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
