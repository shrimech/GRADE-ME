/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 09:54:39 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 09:54:40 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int		main(void)
{
	char c;

	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}
