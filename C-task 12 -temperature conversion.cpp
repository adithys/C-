//Adithya Krishnan
// C PROGRAM Task 12- TO DISPLAY THE FOLLOWING OPTIONS : 1. CELCIUS TO FAHRENHEIT, 2. FAHRENHEIT TO CELCIUS, 3. EXIT. PERFORM THE RELEVANT OPERATION USING SWITCH CASE.
#include<stdio.h>
int main()
{
	int choice;
	float fahr,celc;
	printf("Menu\n1.Celsius to fahrenheit\n2.fahrenheit to celsius\nEnter ur appropriate choice");
	scanf("%d",&choice);
	switch(choice)
	  {
	  	case 1: printf("Celsius to fahrenheit");
	  	        printf("\nEnter the temperature in celsius:");
	  	        scanf("%f",&celc);
	  	        fahr=(celc*1.8)+32.0;
	  	        printf("Temperature in fahrenheit: %f",fahr);
	  	        break;
	  	case 2: printf("Fahrenheit to celsius");
	  	        printf("\nEnter the temperature in fahrenheit:");
	  	        scanf("%f",&fahr);
	  	        celc=(fahr-32.0)/1.8;
	  	        printf("Temperature in celsius: %f",celc);  		       
	  }
}
