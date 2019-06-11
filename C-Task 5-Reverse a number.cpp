//Adithya Krishnan
//C program-Task 5-FIND THE REVERSE OF A GIVEN NUMBER.
#include<stdio.h>
int main()
{
	int n,revno=0,rem;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n>0)
	  {
	  	rem=n%10;
	  	revno=revno*10+rem;
	  	n/=10;
	  }
	printf("Reverse of the number: %d",revno);  
}
