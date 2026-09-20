// Write a program to print n natural numbers in reverse order using for loop.

#include<stdio.h>

int main()
{
	int i;
	int n;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	
	for (i=n;i;i--)
	    {
		printf("The natural numbers in reverse order is: %d \n",i);
		}	
		return 0;
}
