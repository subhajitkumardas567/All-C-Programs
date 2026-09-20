// an array where the pointer points to the first element of the array

#include<stdio.h>

int main()
{
	int arr[10];
	int *ptr=&arr[0]; // pointer pointing to the first element of array.
	ptr=ptr+2;
	if(ptr==&arr[2])  //pointer pointing to the third element of array.
	{
		printf("The pointer points to the same location in memory \n");
	}
	
	else
	{
		printf("The pointer  do not points to the same location in memory \n");
	}
	return 0;
}
