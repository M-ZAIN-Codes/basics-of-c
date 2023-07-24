/*2.	Write a program to print all prime numbers from 1 to 300.*/
#include<stdio.h>
main()
{
	int num,count=0;
for(num=1;num<=300;num++)
	{
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
		printf("%d  ",num);
		
	}
 
}
}
