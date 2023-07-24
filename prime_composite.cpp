/*11.	Enter a number and tell whether it is prime or not. */

#include<stdio.h>
main()
{
	int num,count=0;
	printf("enter a number");
	scanf("%d",&num);
	int chk=num/2;
	while(chk>1)
    {
    	if(num%chk==0)
    	{
		count++;
		break;
		}
	
	chk--;
	}	
	if(count ==0)
	{
		printf("prime");
		
	}
	if (count ==1)
	{
	printf("\ncomposite");
	
}}