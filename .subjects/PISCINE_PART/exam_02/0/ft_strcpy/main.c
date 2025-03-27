/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:23:57 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:23:58 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2);

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	ft_strcpy(argv[1], argv[2]);
	printf("%s\n", argv[2]);
	return (0);
}
