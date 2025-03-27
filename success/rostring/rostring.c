#include<unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int z = 0;
    if (ac > 1)
    {
        while (av[1][z])
            z++;
        while(av[1][z-1] <= 32)
            z--;

        while (av[1][i] <= 32)
            i++;
        j = i;
        while (av[1][i] > 32)
            i++;
        while (av[1][i] <= 32)
            i++;
        while(i < z)
        {
            if (av[1][i] > 32)
            {
                write(1,&av[1][i],1);
                i++;
            }
            if (av[1][i] <= 32)
            {
                write(1," ",1);
                while (av[1][i] <= 32)
                    i++;
            }
        }
        while(av[1][j] > 32)
        {
            write(1,&av[1][j],1);
            j++;
        }

            
            
        
    }
    write(1,"\n",1);
}