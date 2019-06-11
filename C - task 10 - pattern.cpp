//Adithya Krishnan
//C program-Task 10-to read pyramid
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("No of rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	  {
	  	for(j=1;j<=i;j++)
	  	  printf("%d ",j);
	  	printf("\n");  
	  }
}
