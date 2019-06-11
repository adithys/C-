//Adithya Krishnan
//C-Task-9 C program to print the factorial of a number
#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("Number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  f*=i;
	printf("Factorial of the number is: %d",f);  
}
