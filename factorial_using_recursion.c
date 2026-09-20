// finding factorial using recursion.
#include <stdio.h>

int factorial(int x);

int main()
{
	int a=5;
	printf("The value of factorial of %d is %d \n ",a, factorial(a));
	return 0;
}

int factorial(int x)
{
	printf("Calling factorial(%d) \n",x);
	if (x==1 || x==0)   //since we know that  0!=1 and 1!=1.
	{
		return 1;
	}
	else
	{
		return x*factorial(x-1);
	}
}
