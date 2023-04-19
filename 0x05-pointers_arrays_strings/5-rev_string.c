#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	len = _strlen(s);

	i = 0;
	j = len - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

