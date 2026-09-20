//wap to print the sum of of a given no and its reverse
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int digit=0,sum=0,reversed_number=0,original_number=n;
    while(n!=0){
        digit=n%10; // extracting the last digit
        n=n/10; //removing the last digit
        reversed_number=reversed_number*10+digit; //43=4x10+3
        //432=43x10+2  //4321=432x10+1
        }
        sum=reversed_number+original_number;
        
        printf("%d",sum);
    
    
    return 0;
    
}