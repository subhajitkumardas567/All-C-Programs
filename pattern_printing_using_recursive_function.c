//write a program using recursive function to print the following pattern.
//*
//***
//*****

#include<stdio.h>
int printPattern(int n);
int main()
{
	int n;
	printf("Enter the value of n: \n"); //n is taken as input.
	scanf("%d",&n);
	printPattern(n);  //calling the function.
	return 0;

}
int printPattern(int n)
{
	if(n==1)
	{
		printf("*\n");
		return 0;
	}
	else
	{
	printPattern(n-1);
    }
	int i;
	for(i=0;i<(2*n-1);i++)
	{
		printf("*");
	}
	printf("\n");
}


