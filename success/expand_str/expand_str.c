#include<unistd.h>
int main(int ac,char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 2){
    
        while (av[1][j])
            j++;
        while(av[1][j-1] <= 32)
            j--;
        while(av[1][i] <= 32)
            i++;
        while(i<j){
            if (av[1][i] <= 32)
            {
                write(1, "   ",3);
                while(av[1][i] <= 32)
                    i++;
            }
            write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);   
}