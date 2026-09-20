//program to rotate the given array by k steps, where k is positive, k>n(size of array)

#include <stdio.h>
void arrayCopyReverse(int arr[], int a, int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
//{5 6 7 1 2 3 4}
int main() {
	//     0 1 2 3 4 5 6
int arr[]={1,2,3,4,5,6,7};//=>{7 6 5 4 3 2 1},{5 6 7 4 3 2 1}=>{5 6 7 1 2 3 4}
int n=7;
int k=3;
k=k%n;
    
    arrayCopyReverse(arr,0,n-1);
    arrayCopyReverse(arr,0,k-1);
    arrayCopyReverse(arr,3,n-1);
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    
	return 0;
}

    

