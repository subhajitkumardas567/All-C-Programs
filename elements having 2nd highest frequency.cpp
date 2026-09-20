//elements having 2nd highest frequency
#include <stdio.h>

int main() {
	// {10,5,7,10,2,5,7,5,3,7}=arr[i]
	// {2, 3,3,-1,1,-1,-1,-1,1,-1}=freq[i] //duplicate elements changed to -1
    int arr[10],freq[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        freq[i]=0;
    }
    for(int i=0;i<10;i++){
        if(freq[i]!=-1){//duplicate na holei execute krbe
            int count=1;
            for(int j=i+1;j<10;j++){ //1st element pick korar por next element theke start korbe
                if(arr[i]==arr[j]){ //check krbe j duto array same hochhe ki na, starts from 1st index element after taking the first element
                    count++;
                    freq[j]=-1; //duplicate value gulo count krbe na since they are replaced with -1
                }
            }
            freq[i]=count;
        }
    }
    int max=0, second_max=0;
    for(int i=0;i<10;i++){
        if(freq[i]!=-1 && freq[i]>max){
            max=freq[i];
            }
            
        }
    
    for(int i=0;i<10;i++){
        if(freq[i]!=-1 && freq[i]>second_max && freq[i]<max){
            second_max=freq[i];
        }
    }
        
        for(int i=0;i<10;i++){
            if(second_max==freq[i]){
                printf("%d appears %d times\n ",arr[i],freq[i]);
            }
        }
    }


