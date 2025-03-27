# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnuno-ca <nnuno-ca@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 01:05:24 by jcluzet           #+#    #+#              #
#    Updated: 2025/03/27 09:17:57 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@bash .system/launch.sh all

re: clean
	@bash .system/launch.sh

gradejustinstall:
	@bash .system/launch.sh gradejustinstall

grade: clean
	@bash .system/launch.sh grade

clean:
	@rm -rf .system/a.out
	@rm -rf .system/a.out.dSYM

fclean:
	@rm .system/a.out

help:
	@echo "\x1B[37mType \x1B[32m> make \x1B[37mto start the exam"
