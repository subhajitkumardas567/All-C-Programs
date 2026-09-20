// c program to check whether a person can drive or not using if-else
#include<stdio.h>

int main()
{
	int age;
	printf("Enter your age: \n");
	scanf("%d",&age);
	
	if (age>=60)
	{
		printf("You are not allowed to drive!");
	}
	else
	{
		printf("You are allowed to drive!");
	}
	return 0;
}
