#include <stdio.h>

int main() {
	// your code goes here
    int n;
    //int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int flag=1;
    if(arr[0]%2==0){
            flag=0;
        }
    for(int i=1;i<n;i++){
        
        if(arr[i]%2 == arr[i-1]%2){
            flag=0;
        }
    }
    
    
    if(flag==1){
        printf("%d",n);
    }
    
    return 0;
}

