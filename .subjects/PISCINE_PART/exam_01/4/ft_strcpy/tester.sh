# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tester.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/27 10:20:21 by shrimech          #+#    #+#              #
#    Updated: 2025/03/27 10:20:22 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILE='ft_strcpy.c'
MAIN='main.c'
MAIN1='../.system/grading/main.c'
ASSIGN='ft_strcpy/ft_strcpy.c'

index=0

if [ -e traceback ]
then
    rm traceback
fi

cd .system/grading
gcc -o source $FILE $MAIN
./source "" "" | cat -e > sourcexam       #TESTING
rm source
cd ../../rendu
{
gcc -o final $ASSIGN $MAIN1
}  &>../.system/grading/traceback
{
./final "" "" | cat -e > finalexam        #TESTING
mv finalexam ../.system/grading/
rm final
}  &>/dev/null
cd ../.system/grading
DIFF=$(diff sourcexam finalexam)
echo "" >> traceback
if [ "$DIFF" != "" ]
then
		index=$(($index + 1))
		cat sourcexam >> traceback
		echo '\n' >> traceback
		if [ -e finalexam ]
		then
		cat finalexam >> traceback
		else
		echo "" >> traceback
		fi
		echo '\n' >> traceback
		echo "-------" >> traceback
fi
rm finalexam



gcc -o source $FILE $MAIN
./source "abc" "mag" | cat -e > sourcexam    #TESTING
rm source
cd ../../rendu
{
gcc -o final $ASSIGN $MAIN1
./final "abc" "mag" | cat -e > finalexam     #TESTING
mv finalexam ../.system/grading/
rm final
}  &>/dev/null
cd ../.system/grading
DIFF=$(diff sourcexam finalexam)
echo "" >> traceback
if [ "$DIFF" != "" ]
then
		index=$(($index + 1))
		cat sourcexam >> traceback
		echo '\n' >> traceback
		if [ -e finalexam ]
		then
		cat finalexam >> traceback
		else
		echo "" >> traceback
		fi
		echo '\n' >> traceback
		echo "-------" >> traceback
fi

gcc -o source $FILE $MAIN
./source "   c\0" "   f\0" | cat -e > sourcexam    #TESTING
rm source
cd ../../rendu
{
gcc -o final $ASSIGN $MAIN1
./final "   c\0" "   f\0" | cat -e > finalexam     #TESTING
mv finalexam ../.system/grading/
rm final
}  &>/dev/null
cd ../.system/grading
DIFF=$(diff sourcexam finalexam)
echo "" >> traceback
if [ "$DIFF" != "" ]
then
		index=$(($index + 1))
		cat sourcexam >> traceback
		echo '\n' >> traceback
		if [ -e finalexam ]
		then
		cat finalexam >> traceback
		else
		echo "" >> traceback
		fi
		echo '\n' >> traceback
		echo "-------" >> traceback
fi



if [ $index -eq 0 ]
then
	touch passed
fi
{
mv traceback ../../traceback
}	&>/dev/null
rm sourcexam
