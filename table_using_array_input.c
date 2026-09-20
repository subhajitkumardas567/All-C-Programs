// wap in c to create an array of 10 integers and store multiplication table of 5 in it taking user input

#include<stdio.h>

int main()
{
	int mul[10];
	int i;
	int n;
	printf("Enter the value of number whose multiplication table you want to find out: \n");
	scanf("%d", &n);
	for (i=0;i<10;i++)
	{
		mul[i]=n*(i+1);
	}
	printf("The multiplication table of %d is: \n" ,n);
	for (i=0;i<10;i++)
	{
		printf("%d x %d = %d \n",n,i+1,mul[i]);
	}
	return 0;
}
