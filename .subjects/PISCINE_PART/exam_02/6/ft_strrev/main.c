/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:30:54 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:30:55 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int	main(int ac, char **argv)
{
	char *s = argv[1];
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}
