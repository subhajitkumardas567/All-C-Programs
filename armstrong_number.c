//wap to find a given no is armstrong number or not
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int sum=0,count=0,prod,digit=1,temp;
    temp=n; //store original number
    while(n!=0){  
        n=n/10; //153/10=15  15/10=1   1/10=0 
        count++; //1   2   3 
    }
    n=temp; //restore value of n since after every loop n becomes 0
    while(n!=0){
        digit=n%10; //153%10=3   15%10=5   1%10=1
        prod=1;
        for(int i=1;i<=count;i++){
            prod=prod*digit; //3^3   5^3  1^3 
        }
        sum=sum+prod; //3^3+5^3+1^3
        n=n/10; //153/10=15   15/10=1   1/10=0
    }
    if(temp==sum){
        printf("it is armstrong number");
    }
    else{
        printf("it is not armstrong number");
    }
    return 0;
    
}