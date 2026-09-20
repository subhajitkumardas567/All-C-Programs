//frequency of elements in an array
#include <stdio.h>

int main() {
	// {10,5,7,10,2,5,7,5,3,7}=arr[i]
	// {2, 3,2,-1,1,-1,-1,-1, 1,-1}=freq[i] //duplicate elements changed to -1
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
    for(int i=0;i<10;i++){
        if(freq[i]!=-1){ //jegulo te -1 nei setai print korbe
            printf("%d %d\n",arr[i],freq[i]);
        }
    }
}

