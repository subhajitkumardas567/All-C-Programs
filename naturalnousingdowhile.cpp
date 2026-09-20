// wap to print first n natural numbers using do while loop.

#include<stdio.h>

int main()
{
	int i=0;
	int n;
	printf("Enter the value of n: \n");
	scanf("%d", &n);
	do 
	{
	   printf("The first n natural numbers are: %d \n",i+1);
	   i++;
	}
	while(i<n);
	return 0;
}
