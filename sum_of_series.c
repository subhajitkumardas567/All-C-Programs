//wap to print the sum of the series:1-2+3-4+5-6..upto n terms
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        // sum=sum+i;
        if(i%2!=0){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }
    }
     printf("%d",sum);
    return 0;
    
}