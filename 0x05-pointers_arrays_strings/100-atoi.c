#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int sign = 1, num = 0, i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            sign *= -1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');

            /* Check for overflow */
            if (num < 0)
            {
                return (sign == 1 ? INT_MAX : INT_MIN);
            }
        }
        else if (num > 0)
        {
            /* Stop parsing if non-digit is reached */
            break;
        }

        i++;
    }

    return (sign * num);
}

