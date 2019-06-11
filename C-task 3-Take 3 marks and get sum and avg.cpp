//Adithya Krishnan
//Cprogram 2 take the 3 marks and get the sum and avg.
#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sum=0;
	float avg=0;
	printf("Enter the marks: \n");
	printf("Subject 1: ");
	scanf("%f",&sub1);
	printf("Subject 2: ");
	scanf("%f",&sub2);
	printf("Subject 3: ");
	scanf("%f",&sub3);
	sum+=sub1+sub2+sub3;
	avg+=sum/3.0;
	printf("Sum of ur marks is: %f\n",sum);
	printf("Average of ur mark is:%f",avg);	
}

