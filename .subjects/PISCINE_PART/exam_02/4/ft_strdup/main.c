/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:27:52 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:27:53 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strdup(char *src);

void	test(char *str)
{
	printf("%s = ", str);
	printf("%s | ", ft_strdup(str));
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		return (0);
	while (argv[i])
		test(argv[i++]);
	return 0;
}
