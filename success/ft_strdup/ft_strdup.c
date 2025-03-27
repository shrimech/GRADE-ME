#include<stdlib.h>
char    *ft_strdup(char *src)
{
    char *dst;
    int i = 0;

    while(src[i])
        i++;
    dst = malloc(i+1);
    i = 0;
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}