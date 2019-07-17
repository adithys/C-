//C program to conca10ate 2 strings
#include<stdio.h>
int main()
{
	char A[100],B[100];
	int i,j;
	printf("String 1:");
	gets(A);
	printf("String 2:");
	gets(B);
	for(i=0;A[i]!='\0';i++);
	  	for(j=0;A[j]!='\0';i++,j++)
	  	  {
	  	  	A[i]=B[j];
		  }
	A[i]='\0';
	printf("Concatenated string: %s",A);  
}
