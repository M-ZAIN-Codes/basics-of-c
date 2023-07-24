 /*3.	If a five-digit number is input through the keyboard,
  write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’) */
#include<stdio.h>
main()
 {
 	int num,sum=0,rem;
 	printf("enter 5 digit num");
 	scanf("%d",&num);
  while(1)
 	{
 		
 		rem=num%10;
 		num=num/10;
 		sum=sum+rem;
 		if (num==0)
 		{
 			break;
		 }
	 }
	 printf("\n sum of digits =%d",sum);
 }