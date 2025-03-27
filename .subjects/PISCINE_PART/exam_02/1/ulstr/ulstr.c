/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:25:23 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:25:24 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		index;

	index = 0;
	if (ac == 2)
	{
		while (av[1][index] != '\0')
		{
			if (av[1][index] >= 'A' && av[1][index] <= 'Z')
				ft_putchar(av[1][index] - 'A' + 'a');
			else if (av[1][index] >= 'a' && av[1][index] <= 'z')
				ft_putchar(av[1][index] - 'a' + 'A');
			else
				ft_putchar(av[1][index]);
			index++;
		}
	}
	ft_putchar('\n');
	return (0);
}
