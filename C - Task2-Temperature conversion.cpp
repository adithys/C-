//Adithya Krishnan
//C PROGRAM-Task 2-TO TAKE THE TEMPERATURE IN CELSIUS AND CONVERT IT TO FAHRENHEIT AND DISPLAY IT BACK.
//*Tip -> Use this formula -> Celsius = 5 * (Fahrenheit - 32)/9
#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temp in celsius: ");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("Temp in fahrenheit: %f",f);
}



