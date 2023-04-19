#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;

        if (*s >= '0' && *s <= '9')
            num = num * 10 + (*s - '0');

        if (*s == '+' || (*s >= '0' && *s <= '9'))
        {
            if (*(s + 1) < '0' || *(s + 1) > '9')
                break;
        }
        s++;
    }

    return (int)(sign * num);
}

