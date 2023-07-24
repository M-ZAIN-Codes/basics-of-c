/*5.	If a four-digit number is input through the keyboard,
 write a program to obtain the sum of the first and last digit of this number*/
 #include<stdio.h>
 main()
 {
 	int number,num2,rem,sum=0;
 	printf("enter a 4 digit number");
 	scanf("%d",&number);
 	  num2=number%10;
	  number=number/10;
	  for(;1;)
 	{
 	    rem=number%10;
		number=number/10;
		if(number==0)
		{
			break;
			}	
			
	 }
	 sum=num2+rem;
	 printf("%d ",sum);
 }