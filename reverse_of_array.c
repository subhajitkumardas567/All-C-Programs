//program to copy one array elements to another array in reverse
#include <stdio.h>
int arrayCopyReverse(int arr[], int size){

   int brr[size];
    
    for(int i=0;i<size;i++){
       brr[i]=arr[size-1-i];
    }
    for(int i=0;i<size;i++){
        printf("%d ",brr[i]);
        }
    }
    

int main() {
	
	int arr[10]={0,1,2,3,4,5,6,7,8,9};

	int length=sizeof(arr)/sizeof(arr[0]);//len=5x4=20/4 = 5 


	arrayCopyReverse(arr,length);
// 	printf("%d\n",result);
	return 0;
}
    

