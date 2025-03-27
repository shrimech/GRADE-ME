#include <stdlib.h>
#include <stdio.h>

void	fprime(unsigned int nb)
{
	unsigned int	prime;

    if (nb<0)
        return;
	if (nb == 1)
		printf("1");
	else
	{
		prime = 2;
		while (nb > 1)
		{
			if (nb % prime == 0)
			{
				printf("%d", prime);
				nb /= prime;
				if (nb > 1)
					printf("*");
				prime--;
			}
			prime++;
		}
	}
}
int		main(int ac, char **av)
{
	if (ac == 2 && *av[1] && atoi(av[1]) >= 0)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}