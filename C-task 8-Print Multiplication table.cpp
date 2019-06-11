//Adithya Krishnan
//C program-Task 8-to accept an integer and print the mulitplication table
#include<stdio.h>
int main()
{
	int a,i,c;
	printf("Enter a number. ");
	scanf("%d",&a);
	printf("Till how much do u need to multiply? ");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	  printf("%d * %d= %d\n",a,i,a*i);
}
