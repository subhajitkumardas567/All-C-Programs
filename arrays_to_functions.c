//arrays to functions

#include<stdio.h>

void printArray(int *ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("The value of element %d is %d \n",i+1, *(ptr+i));
	}
}
int main()
{
	int arr[]={1,34,567,87,90};
	printArray(arr,4);
	return 0;
}
