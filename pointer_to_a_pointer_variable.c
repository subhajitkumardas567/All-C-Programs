//write a program to print the value of a variable i by using pointer to pointer variable type of variable.

#include<stdio.h>

int main()
{
	int i;
	printf("Enter the value of i: \n");
	scanf("%d",&i);
	int *ptr;       //pointer to a variable.
	int **ptr_ptr;  //pointer to a pointer to a variable.
	
	ptr=&i;
	ptr_ptr=&ptr;
	
	printf("The value of i is %d \n", **ptr_ptr);
	return 0;
}
