/*13.	Enter a 3 digit number and find whether its Armstrong number or not?
 If sum of cubes of digits of three-digit number is equal to the number itself, 
 then the number is called an Armstrong number.
  For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
*/

#include<stdio.h>
main()
{
	int num,rem,cube,sum=0;
	printf("enter a number");
	scanf("%d",&num);
	int store=num;
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
	printf("%d is armstrong ",store);
	
	else
	printf("not an armstrong");
}