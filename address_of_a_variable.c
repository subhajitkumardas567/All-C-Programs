// write a program to print the address of a variable, using this address to get the value of the variable.
#include<stdio.h>

int main()
{
	int a;
	int *ptr;
	ptr=&a;
	printf("Enter the value of variable: \n",a);
	scanf("%d",&a);
	printf("The address of the variable is %u \n",ptr);
	printf("The value of the variable is %d \n",*ptr);
	return 0;
}
