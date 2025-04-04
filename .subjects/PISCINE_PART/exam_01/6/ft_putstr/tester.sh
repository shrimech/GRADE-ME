# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tester.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shrimech <shrimech@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/27 10:22:26 by shrimech          #+#    #+#              #
#    Updated: 2025/03/27 10:22:27 by shrimech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILE='ft_putstr.c'
MAIN='main.c'
ASSIGN='ft_putstr/ft_putstr.c'
MAIN1='../.system/grading/main.c'

index=0

if [ -e traceback ]
then
    rm traceback
fi

cd .system/grading
gcc -o source $FILE $MAIN
./source "" | cat -e > sourcexam       #TESTING
rm source
cd ../../rendu
{
gcc -o final $ASSIGN $MAIN1
}  &>../.system/grading/traceback
{
./final "" | cat -e > finalexam        #TESTING
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
./source "abc" | cat -e > sourcexam    #TESTING
rm source
cd ../../rendu
{
gcc -o final $ASSIGN $MAIN1
./final "abc" | cat -e > finalexam     #TESTING
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
./source "   c0vdsjnodgfiodgfiudgjfduigjfduigjfdiugjfdugjfdugjfduigjfdgjufdugfdgfd\0f" | cat -e > sourcexam    #TESTING
rm source
cd ../../rendu
{
gcc -o final $ASSIGN $MAIN1
./final "   c0vdsjnodgfiodgfiudgjfduigjfduigjfdiugjfdugjfdugjfduigjfdgjufdugfdgfd\0f" | cat -e > finalexam     #TESTING
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
./source "   c0vdsjnodg\0fiodgfiudgjfduigjfduigjfdiugjfdugjfdugjfduigjfdgjufdugfdgfd\0f" | cat -e > sourcexam    #TESTING
rm source
cd ../../rendu
{
gcc -o final $ASSIGN $MAIN1
./final "   c0vdsjnodg\0fiodgfiudgjfduigjfduigjfdiugjfdugjfdugjfduigjfdgjufdugfdgfd\0f" | cat -e > finalexam     #TESTING
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
