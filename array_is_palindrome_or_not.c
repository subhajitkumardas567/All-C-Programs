//program to check if the arr is palindrome or not

#include <stdio.h>
void arrayCopyReverse(int arr[], int size){
    int i=0;
    int j=size-1;
    
    while(i<j){
        if(arr[i]!=arr[j]){
            printf("the array is not palindrome\n");
            return;
        }
        i++;
        j--;
    }
    printf("the array is palindrome\n");
}

int main() {
	
	int arr[]={0,1,2,3,2,1,0};
    
	int length=sizeof(arr)/sizeof(arr[0]);//len=5x4=20/4 = 5 
    arrayCopyReverse(arr,length);
    
	return 0;
}

    

