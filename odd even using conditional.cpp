/*1.	Write a program to enter a number and display whether its even or odd using conditional operator.*/
#include <stdio.h>
#include<conio.h>
main()
{
	char ch;
ch=getch();
	((ch-48)%2==0)?printf("%d is even",ch-48):printf("%d is odd",ch-48);
}