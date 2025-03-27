/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 10:32:14 by shrimech          #+#    #+#             */
/*   Updated: 2025/03/27 10:32:15 by shrimech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_power_of_2(unsigned int n);

int main(int argc, char **argv)
{
	printf("%d", is_power_of_2(atoi(argv[1])));
	return(0);
}
