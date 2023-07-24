 /*4.	If a five-digit number is input through the keyboard, write a program to reverse the number. */
 #include<stdio.h>
main()
 {
 	int num,rem;
 	printf("enter 5 digit num");
 	scanf("%d",&num);
  while(1)
 	{
 		
 		rem=num%10;
 		num=num/10;
 		printf("%d",rem);
 		if (num==0)
 		{
 			break;
		 }
	 }
	 
 }