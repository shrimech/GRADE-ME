#include<unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int j;
    if (ac == 2)
    {
        while (av[1][i])
        {
            j = 1;
            if(av[1][i] >= 'a'&&av[1][i] <= 'z')
                j = av[1][i] - 'a' + 1;
            if(av[1][i] >= 'A'&&av[1][i] <= 'Z')
                j = av[1][i] - 'A' + 1;
            while(j--)
                write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}