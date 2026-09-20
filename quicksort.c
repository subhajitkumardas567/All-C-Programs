//quick sort

#include<stdio.h>
int partition(int arr[], int lb, int ub);
void quicksort(int arr[],int lb,int ub){
	int loc;
	if(lb<ub){//0<6
		loc=partition(arr,lb,ub);//p(arr,0,6)= 4 (pivot r index)
		quicksort(arr,lb,loc-1);//0 to 3
		quicksort(arr,loc+1,ub);//5 to 6
	}
}
//  0  1  2  3  4   5  6    ->indexing
//  8  5  4  3  2   9  11   ->data element
//                 
int partition(int arr[],int lb,int ub){
	int pivot=arr[lb],temp;//pivot=8
	int start=lb;//0
	int end=ub;//6
	while(start<end){//5<4
		while(arr[start]<=pivot){//9<=8
			start++;//5
		}
		while(arr[end]>pivot){//2>8
			end--;//4
		}
		if(start<end){//5<4
		/* swap(arr[start],arr[end]) */
			temp = arr[start];
		  	arr[start] = arr[end];
		  	arr[end] = temp;
		}
	}
	/* swap(pivot, arr[end]) */
	temp = arr[lb];
	arr[lb] = arr[end];
	arr[end] = temp;
	return end;
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

int main(){
	int arr[]={8,5,4,3,2,9,11};
	int size=sizeof(arr)/sizeof(arr[0]);
	//calling quicksort for dividing purpose
	quicksort(arr,0,size-1);//qs(arr,0,6)
	printf("Sorted array: \n");
	printArray(arr, size);
}
