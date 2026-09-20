//program to copy one array elements to another array in reverse without using extra array
#include <stdio.h>
void arrayCopyReverse(int arr[], int size){
    int i=0;
    int j=size-1;
    
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main() {
	
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
    
	int length=sizeof(arr)/sizeof(arr[0]);//len=5x4=20/4 = 5 
    arrayCopyReverse(arr,length);
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
	return 0;
}

    

