#include "main.h"

/**
 * rot13 - encodes string rot13
 * @s: pointer to string to e encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char r13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = r13[j];
				break;
			}
		}
	}

	return (s);
}
