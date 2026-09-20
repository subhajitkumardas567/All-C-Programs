// write a program using recursion to calculate nth element of fibonacci series.

#include<stdio.h>
#include<math.h>

int fibonacci(int n);

int main()
{
	int n;
	printf("Enter the position of fibonacci element you want: \n");
	scanf("%d",&n);
	if 
	(n<0)
	{
		printf("Please enter a positive integer value. \n");
	}
	else
	{
		int result=fibonacci(n);
		printf("The %dth fibonacci number is: %d \n",n,result);
	}
	return 0;
}

int fibonacci(int n)
{
	if (n<=1 || n<=0)
	return n;
	return fibonacci(n-1)+fibonacci(n-2);
}
