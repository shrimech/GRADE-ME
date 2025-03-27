/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:32:45 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:32:46 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
#include <stdlib.h>

void	print_bits(unsigned char octet);

int		main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	print_bits(n);
	write(1, "\n", 1);
}
