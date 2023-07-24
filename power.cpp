/*9.	Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.*/

#include<stdio.h>
#include<math.h>
main()
{
	int num_1,num_2;
	printf("enter 2 numbers");
	scanf("%d %d",&num_1,&num_2);
	 int power =pow(num_1,num_2);
	printf("%d",power);
	
}