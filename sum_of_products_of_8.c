//Write a program to calculate the sum of the numbers of multiplication table 8.(from 1 to 10)

#include<stdio.h>
#include<math.h>

int main()
{
	int i;
	int sum=0;
	printf("Multiplication table of 8 is: \n");
	scanf("%d",&i);
	for(i=10;i;i--)
	{
		printf("8 x %d = %d \n",i,8*i);
	}
	for(i=1;i<=10;i++)
	{
		sum=sum+8*i;
	}
	printf("Sum of all products of 8 are: %d \n",sum);
	return 0;
}
