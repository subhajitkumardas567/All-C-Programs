//Write a program to calculate a factorial of a given number using for/while/do-while loop.

#include<stdio.h>
#include<math.h>

int main()
{
	int i=1;
	int n=5;
	int factorial=1;
	 do
	{
		factorial=factorial*i;
		i++;
	}
	while(i<=n);
	printf("The factorial of %d is: %d \n",n, factorial);
	return 0;
	
}
