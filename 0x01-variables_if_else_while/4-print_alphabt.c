#include <stdio.h>

/**
 * main - Prints all letter except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			letter = letter + 1;
			continue;
		}
		putchar(letter);

		letter = letter + 1;
	}
	putchar('\n');

	return (0);
}
