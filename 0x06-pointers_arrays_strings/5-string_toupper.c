#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @s: string to be changed
 *
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int i;

	/* loop through characters of the string */
	/* except the null character */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* check if characters are in lowercase */
		/* then convert them to uppercase */
		/* by substracting 32 from their ASCII value */
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
	}

	return (s);
}
