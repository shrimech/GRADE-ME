/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:19:54 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:19:55 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	return (0);
}
