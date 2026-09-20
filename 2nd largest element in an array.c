//2nd largest element in an array
#include <stdio.h>
int secondLargest(int arr[],int size){
    int second_max=arr[0];
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
    }
    for(int i=1;i<size;i++){
        if(arr[i]!=max && arr[i]>second_max){
            second_max=arr[i];
            
        }
    }
    return second_max;
}
int main() {
	//{10,20, 50, 86, 75, 90}
   // {0  1   2   3   4   5}
	int arr[10]={0,1,2,3,4,5,6,7,8,9};

	int length=sizeof(arr)/sizeof(arr[0]);//len=5x4=20/4 = 5 


	int result=secondLargest(arr,length);
	printf("%d\n",result);
	return 0;
}
    


