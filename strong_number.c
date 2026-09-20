//wap to find a given no is strong number or not
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0,digit=1,fact,temp;
    temp=n; //store original number
    
    while(n!=0){
        digit=n%10; //145%10=5 14%10=4   1%10=1
        fact=1;
        for(int i=1;i<=digit;i++){  //i<1,4,5
            fact=fact*i; //5!   4!  1! 
        }
        sum=sum+fact; //5!+ 4! + 1! 
         n=n/10; //145/10=14   14/10=1   1/10=0
    }
    if(temp==sum){
        printf("it is strong number");
    }
    else{
        printf("it is not strong number");
    }
    return 0;
    
}