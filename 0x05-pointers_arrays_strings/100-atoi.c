/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    unsigned long int num = 0;
    int sign = 1;
    int started = 0;

    while (*s)
    {
        if (*s == '-' && !started)
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            started = 1;
            num = num * 10 + (*s - '0');
            if (num > INT_MAX)
                break;
        }
        else if (started)
            break;
        s++;
    }

    if (num > INT_MAX)
        return (sign == 1 ? INT_MAX : INT_MIN);
    else
        return ((int)num * sign);
}
