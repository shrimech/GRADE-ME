#include<stdlib.h>
#include<stdio.h>
char	*ft_itoa(int nbr)
{
    int i =0;
    int n;
    char *num;

    n = nbr;
    if (n == 0)
        i = 1;
    while (n)
    {
        if (n < 0)
        {
            n = -n;
            i++;
        }
        n /=10;
        i++;
    }
    num = malloc(i+1);
    if (nbr < 0)
    {
        num[0] = '-';
        nbr = -nbr;
    }
    if (nbr == 0)
        num[0] = '0';
    num[i] = '\0';
    while (nbr)
    {
        num[i-1] = nbr%10 + '0';
        nbr /= 10;
        i--;
    }
    return(num);
}