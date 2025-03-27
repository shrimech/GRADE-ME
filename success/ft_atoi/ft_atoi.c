int	ft_atoi(const char *str)
{
    int i = 0;
    int s = 1;
    int n = 0;

    while(str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        s=-1;
        i++;
    }
    if (str[i] == '+')
    {
        s=1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + str[i] - '0';
        i++; 
    }
    return(s*n);
}
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int i = ft_atoi("++5a24");
//     int j = atoi("+5a142");
//     printf("%d.......%d\n",i,j);
//}