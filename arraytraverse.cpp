#include <stdio.h>

int traverse(int*,int);
int main()
{
	int arr[5]={2,6,7,3,8};
	int n=5;
	
	printf("Press any key to perform array traversal and display its elements: \n");
	
	traverse(arr,n);
}
    int traverse(int*array, int size)
    {
    	int i;
    	for(i=0;i<size;i++)
    	printf("arr[%d]= %d \n",i,array[i]);
	
	return 0;
    }  
