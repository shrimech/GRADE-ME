/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:22:43 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:22:44 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int	*a, int *b);

int main (int argc, char **argv)
{
	(void)argc;
	int *a;
	int *b;

	*a = atoi(argv[1]);
	*b = atoi(argv[2]);
	printf("%d\n%d", a, b);
	ft_swap(&a, &b);
	printf("%d\n%d", a, b);
	return (0);
}
