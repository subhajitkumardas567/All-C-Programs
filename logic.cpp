//c program to check whether a person can drive or not using logical operators
#include<stdio.h>

int main()
{
	int age;
	printf("Enter your age: \n");
	scanf("%d",&age);
	
	if(age<=60 && age>=18)
	{
		printf("You are  allowed to drive!\n");
	}
	else
	{
		printf("You are not allowed to drive!\n");
	}
	return 0;
	
}
