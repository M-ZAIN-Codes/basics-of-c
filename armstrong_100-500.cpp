/*14.	Write a program to print out all Armstrong numbers between 100 and 500. */


#include<stdio.h>
main()
{
	int num,rem,cube,sum=0;
		int store=0;
		
  for(num=100;num<=500;num++)
  {
  	store=num;
	  sum=0;
	while(1)
	{
		cube =1;
		
	   rem=num%10;
	   num=num/10;
	   cube=rem*rem*rem;
	   sum=sum+cube;
	   if(num%10==0)
	   {
	   break;
			  }	   
	}
	if(store==sum)
	{
		printf("%d  ",store);
	}
  }
}