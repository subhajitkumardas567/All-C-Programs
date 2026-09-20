// Write a program to sum first 10 natural numbers using for,while,do-while loop.

#include<stdio.h>
#include<math.h>

int main()
{
	int i=0;
	int sum=0;
	int n=10;
	//for (i=0;i<=10;i++)
	do //while(i<n)
	{
	
		sum=sum + i;
		i++;
	}
	while(i<=n);
	printf("The sum of first 10 natural numbers are: %d \n ",sum);
	return 0;
}
