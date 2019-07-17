//Check armstrong number
#include<stdio.h>
#include<math.h>
int main()
{
	int n,origno,rem,result=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n!=0)
	  {
	  	rem=n%10;
	  	result+=pow(rem,3);
	  	n/=10;
	  }
	if(result==origno)  
	  printf("Armstrong number");
	else
	   printf("Not an armstrong number");  
}
