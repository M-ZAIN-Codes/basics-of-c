/*6.	Enter a number and display its divisors.  (e.g., divisors of 15 are: 1,3,5,15)*/
#include<stdio.h>
main()
{
	int num,count;
	printf("enter a number");
	scanf("%d",&num);
	count=1;
	while(count<=num/2)
	{
       if(num%count==0)
		printf("%d,",count);
			if(num)
	    {
				printf("%d.",count);
			}
		count++;
	}
	
}