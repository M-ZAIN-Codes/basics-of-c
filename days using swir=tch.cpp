/*3.	Write a program to enter a number and display the name of month using switch statement. 
If user enters an invalid number, then display message to enter a valid number. */
#include<stdio.h>
main()
{
	int choice;
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	case 1:
		{printf("monday");
		break ;
		}
		case 2:
		{
			printf("tuesday");
			break;
		}
		case 3:
		{
			printf("wednesday");
			break;
		}
		case 4:
		{
			printf("thursday");
			break;
		}
		case 5:
		{
			printf("friday");
			break;
		}
		case 6:
		{
			printf("saturadaay");
			break;
		}
		case 7:
		{
			printf("sunday");
			break;
		}
		default :
			printf(" invalid ");
	}
}