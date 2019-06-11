//Adithya Krishnan
//C-Task1-Read and dispaly the characters
#include<stdio.h>
struct person
  {
  	char name[50];
  	int age;
  	unsigned long long int phno;
  }s;
int main()
{
   printf("Enter the details: \n");
   printf("1.Name: ");
   gets(s.name);
   printf("2.Age: ");
   scanf("%d",&s.age);
   printf("3.Phone number: ");
   scanf("%llu",&s.phno);
   printf("\n\nFollowing are the details: ");
   printf("\n1.Name: ");
   puts(s.name);
   printf("2.Age: %d",s.age);
   printf("\n3.Phone number: %llu",s.phno);
}  
