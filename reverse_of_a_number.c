//wap to print reverse of a given no
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int digit=0,sum=0,reversed_number=0;
    while(n!=0){
        digit=n%10; // extracting the last digit
        n=n/10; //removing the last digit
        reversed_number=reversed_number*10+digit; //43=4x10+3
        //432=43x10+2  //4321=432x10+1
        //sum=sum+digit;
        }
    
        printf("%d",reversed_number);
    
    
    return 0;
    
}