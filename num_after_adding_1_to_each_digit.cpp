 /*2.	If a five-digit number is input through the keyboard, write a program to print a new number by adding one to each of its digits.
  For example, if the number that is input is 12381 then the output should be displayed as 23492.*/
 #include<stdio.h>
 #include<conio.h>
 main()
 {
 	char ch=1,final_res;
 	int num_after_adding_1;
 	while(ch>=1)
	{
    ch=getche();
	 
 	int num_after_adding_1=(ch-48)+1;
 	final_res=num_after_adding_1*10;
	 }
 	printf("number after adding 1 to each digit =%c",final_res);
    
 }