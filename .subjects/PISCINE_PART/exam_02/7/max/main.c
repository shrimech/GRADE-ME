/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:32:26 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:32:27 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len);

int		main(int argc, char **argv)
{
	int	*tab;
	int i = 0;

	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	while (i < argc-1)
	{
		tab[i] = atoi(argv[i+1]);
		i++;
	}
	printf("%d", max(tab, argc-1));
	return (0);
}
