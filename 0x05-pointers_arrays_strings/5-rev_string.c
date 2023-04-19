#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;

    return (i);
}

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

