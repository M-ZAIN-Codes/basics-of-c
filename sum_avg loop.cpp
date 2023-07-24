/*5.	Ask user to enter 10 numbers. Print the sum and average of the entered numbers.*/
#include<stdio.h>
main()
{
   int count,sum=0,avg,number;
   count=1;
   while(count<=10)
   {
   	printf("enter a number");
   	scanf("%d",&number);
   	sum=sum+number;
    count++;
   }
   avg=sum/10;
   printf("sum  = %d\navg  = %d",sum,avg);
   	
}