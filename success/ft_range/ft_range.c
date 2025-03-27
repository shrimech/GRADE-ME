#include<stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;
    int *r;
    int l;

    if (start < end)
        l = end - start + 1;
    else
        l = start - end + 1;
    r = malloc(l * sizeof(int));
        
    while(i<l)
    {
        if (start < end)
            r[i] = start++;
        else
            r[i] = start--;
        i++;
    }
    return(r);
}
// #include<stdio.h>
// int main()
// {
//     int *r = ft_range(2,8);
//     printf("%d",*r);
// }