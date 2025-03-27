#include <unistd.h>

void p_c(char c)
{
    write(1, &c, 1);
}
char *p_n(int nb)
{
    if (nb > 9)
    {
        p_n(nb / 10);
        p_c(nb % 10 + 48);
    }
    if (nb <= 9)
        p_c(nb % 10 + 48);
}

int main()
{
    int i = 1 ;
    while (i <= 100)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            write(1, "fizzbuzz", 8);
            p_c('\n');
        }
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else
        {
            p_n(i);
            p_c('\n');
        }
        i++;
    }
}