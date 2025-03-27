#include <unistd.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i =0;
    int j;
    //size_t z;
    while(s[i])
    {
       j = 0;
       while (reject[j])
       {
            if (s[i] == reject[j])
                return(i);
            j++;
       }
       i++;
    }
    return(i);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     int i;
//     int j;
//     i = ft_strcspn("hello","hello");
//     j = strcspn("hello","hello");
//     printf("%d ...%d",i,j);
// }