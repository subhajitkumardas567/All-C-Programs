//wap to count digits of a given no
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0){
        n=n/10; //extracting the last digit
        count++; //incrementing the value of 1 everytime a digit is counted
        }
        printf("%d",count);
    
    
    return 0;
    
}