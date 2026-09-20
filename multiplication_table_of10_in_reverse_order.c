// Write a program to print multiplication table of 10 in reverse order.

#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	printf("Multiplication table of 10 is: \n");
	scanf("%d",&i);
	for(i=10;i;i--)
	{
		printf("10 x %d = %d \n",i,10*i);
	}
	return 0;
}
