/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:24:13 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:24:14 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int main (int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
