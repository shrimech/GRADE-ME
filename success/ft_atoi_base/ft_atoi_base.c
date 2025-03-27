#include<stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int n;
    int sg;

    i = 0;
    sg = 1;
    n = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            sg *= -1;
    while (str[i] && (str_base >= 0 && str_base <= 16) && (str[i] != ' ') && !(str[i] >= 9 && str[i] <= 13))
    {
        if (str[i] >= '0' && str[i] <= '9')
            n = (n * str_base) + (str[i] - '0');
        else if (str[i] >= 'a' && str[i] <= 'f')
            n = (n * str_base) + (str[i] - 'a' + 10);
        else if (str[i] >= 'A' && str[i] <= 'F')
            n = (n * str_base) + (str[i] - 'A' + 10);
       i++;
    }
    return (sg * n);
}