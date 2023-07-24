/*5.	Write a C program to check whether a character is an alphabet, digit or special character. (Use Ascii value)*/
#include<stdio.h>
main()
{
	char ch;
	scanf("%c",&ch);
	
	if(ch>=48&&ch<=57)
	{
		printf("you entered a number");
	}
	else if(ch>=65&&ch<=90)
	{
		printf("you entered a capital letter");
	}
	else if(ch>=97&&ch<=122)
	{
	printf("you entered a small letter");
	}
	else 
	printf("you entered a special character");
}