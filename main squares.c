#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{ 
int num1,num2,num3;
int square_1,square_2,square_3;
// getting values from the keyboard
printf("Enter first number:\n");
scanf("%d" ,&num1);
printf("Enter second number:\n");
scanf("%d" ,&num2);
printf("Enter third number:\n");
scanf("%d" ,&num3);
//getting squares
square_1=num1*num1;
square_2=num2*num2;
square_3=num3*num3;
//printing values
printf("square_1 is %d\n",square_1);
printf("square_2 is %d\n",square_2);
printf("square_3 is %d\n",square_3);
	return 0;
}