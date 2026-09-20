//Write a program to check whether a number is prime or not using loops.

#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
	printf("This is not a prime number.");
		}
		else
		{
	printf("This is a prime number.");
		}
		
	}

return 0;
}
