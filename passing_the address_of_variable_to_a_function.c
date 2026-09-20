// write a program to print the address of a variable and pass this variable to a function and print its address.

#include<stdio.h>

void printAddress(int a){
	printf("The address of the variable a is %u \n",&a);
}
int main()
{
	int i;
	printf("Enter the value of variable i: \n");
	scanf("%d",&i);
	printf("The value of the variable i is %u \n",i);
	printAddress(i);  //passing the variable to a function.
	printf("The address of the variable i is %u \n",&i);
	return 0;
	
}
