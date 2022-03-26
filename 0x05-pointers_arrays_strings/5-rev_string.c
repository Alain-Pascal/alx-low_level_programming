#include "main.h"
/* for strlen() */
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: pointer to where the string is stored
 *
 */
void rev_string(char *s)
{
	int i, tmp;
	int len = strlen(s);

	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
