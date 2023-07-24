/*
1.	Enter 2 numbers and find whether first number is divisor of second or not.
*/
#include<stdio.h>
main()
{
	int num_1,num_2;
	printf("enter first number :");
	scanf("%d",&num_1);
	printf("enter 2nd number :");
	scanf("%d",&num_2);
	if(num_2%num_1==0)
	{
		printf("%d is divisor of %d",num_1,num_2);
	}
	else
	{
		printf("not a divisor");
	}
}