/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:29:02 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:29:03 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

unsigned char	swap_bits(unsigned char octet);

int	main(int argc, char **argv)
{
	unsigned char c;

	c = argv[1][0];
	write(1, &c, 1);
	write(1, "\n", 1);
	c = swap_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
