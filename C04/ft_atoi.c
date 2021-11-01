#include <stdio.h>

int        ft_atoi(const char *str)
{
    int neg;
    int i;
    int result;

    i = 0;
    neg = 1;
    result = 0;
    while (str[i] == ' ' || str[i] > 8 && str[i] < 14)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    return (result * neg);
}
