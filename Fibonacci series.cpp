/*12.	Write a program to print Fibonacci series (1 1 2 3 5 7 12 19 31 ……)*/

#include<stdio.h>
main()
{
	int next_term=0,num_1=0,num_2=1;
	printf("%d %d",num_1,num_2);
	
	while(1)
	{
	  next_term=num_1+num_2;
	  num_1=num_2;
	  num_2=next_term;
	  	  	
    if(next_term>=100)
     {
	 break;
	 }
	 printf(" %d ",next_term);
	}
}