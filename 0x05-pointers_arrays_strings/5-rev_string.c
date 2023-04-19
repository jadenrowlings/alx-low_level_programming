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

/**
 * _strlen - calculate the length of a string
 * @s: string to calculate length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
        int len = 0;

        while (s[len] != '\0')
                len++;

        return (len);
}

