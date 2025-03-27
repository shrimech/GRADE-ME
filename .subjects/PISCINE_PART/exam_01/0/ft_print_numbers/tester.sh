# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tester.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/27 09:55:27 by shrimech          #+#    #+#              #
#    Updated: 2025/03/27 09:57:47 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




FILE='ft_print_num =-*'bers.c'
ASSIGN='ft_print_numbers'

bash .system/auto_correc_main.sh $FILE $ASSIGN
if [ -e .system/grading/traceback ];then
    mv .system/grading/traceback .
	exit 1
fi
bash .system/auto_correc_main.sh $FILE $ASSIGN "abc"
if [ -e .system/grading/traceback ];then
    mv .system/grading/traceback .
	exit 1
fi

touch .system/grading/passed;
