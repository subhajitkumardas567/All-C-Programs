// c program to check whether a number is odd or even using if-else
#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter a number: \n");
	scanf("%d", &a);
	
	if (a%2==0)
	{
		printf("The number %d is even. \n",a);
	}
	else
	{
		printf("The number %d is odd. \n",a);
	}
	return 0;
}
