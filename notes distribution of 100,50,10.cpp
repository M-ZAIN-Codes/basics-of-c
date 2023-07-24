/*7.	A cashier has currency notes of denominations 10, 50 and 100.
 If the amount to be withdrawn is input through the keyboard in hundreds,
 find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.*/
 #include<stdio.h>
 main()
 {
 	int hund_notes,fifty_notes,tens_notes,amount;
 	scanf("%d",&amount);
 	hund_notes=amount/100;
 	amount=amount%100;
 	fifty_notes=amount/50;
 	amount=amount%50;
 	tens_notes=amount/10;
 	printf("%d hundred %d fifty & %d tens notes",hund_notes,fifty_notes,tens_notes);
 	
 }