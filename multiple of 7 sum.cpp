/*8.	Write a program to calculate and print the sum of all multiples of 7 from 1 to 100.*/

#include<stdio.h>
main()
{
	int num=7,multi,count=1,sum=0;
	while(count>=1)
	{
		multi=num*count;
		if(multi<=100)
		{
			printf("%d\t",multi);
			sum=sum+multi;
		}
		else
		{
			break;
		}
		count++;
	}
	printf("\n%d",sum);
	

}