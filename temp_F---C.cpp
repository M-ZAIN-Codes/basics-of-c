 /*1.	Temperature of a city in Fahrenheit degrees is input through the keyboard.
  Write a program to convert this temperature into Centigrade degrees. (Formula: C = (F-32) * 5/9)*/
 #include<stdio.h>
 main()
 {
 	float temp_in_F,temp_in_C;
 	printf("enter temp in farhenheit =");
 	scanf("%f",&temp_in_F);
 	temp_in_C=(temp_in_F-32)*5/9;
 	printf("temperature in centigrade is %.1fC",temp_in_C);
 	
 }