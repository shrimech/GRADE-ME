/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:17:33 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:17:34 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int		main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}
