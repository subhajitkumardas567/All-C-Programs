// Write a program to print first n natural numbers using for loop

#include<stdio.h>

int main()
{


int i;
int n;
printf("Enter the value of n: \n");
scanf("%d",&n);
for (i=0;i<n;i++)
{
	printf("The first n natural numbers are: %d \n",i+1);
}
return 0;
}
