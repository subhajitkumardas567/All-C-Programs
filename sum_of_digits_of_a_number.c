//wap to count digits of a given no
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int digit=0,sum=0;
    while(n!=0){
        digit=n%10; //
        n=n/10; //extracting the last digit
        //count++; //incrementing the value of 1 everytime a digit is counted
        sum=sum+digit;
        }
        printf("%d",sum);
    
    
    return 0;
    
}