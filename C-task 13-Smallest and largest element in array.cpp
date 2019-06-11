//Adithya Krishnan
//C-Task 13-SMALLEST AND LARGEST ELEMENT IN AN ARRAY.
#include<stdio.h>
int main()
{
	int A[100],size,i,min=0,max=0;
	printf("Array size: ");
	scanf("%d",&size);
	printf("Array: ");
	for(i=0;i<size;i++)
	  scanf("%d",&A[i]);
	min=A[0];
	for(i=0;i<size;i++)
	  {
	  	if(A[i]<min)
	  	  min=A[i];
	  }
	max=A[0];
	for(i=0;i<size;i++)
	  {
	  	if(A[i]>max)
	  	  max=A[i];
	  } 
	printf("Largest element in array: %d",max);
	printf("\nSmallest element in array: %d",min); 
}
