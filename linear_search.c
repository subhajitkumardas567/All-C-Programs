#include <stdio.h>

int main() {
    int  flag=0;
    int arr[5];
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        scanf("%d", &arr[i]);
    }
    int element;
    scanf("%d",&element);
    for(int i=0;i<length;i++){
        if(arr[i]==element){
            printf("element found at : %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("element not found");
    }
    return 0;
}

