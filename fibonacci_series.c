//wap to print the fibonacci series
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a=1,b=1,sum=1;
    printf("the 1st fibonacci no is %d\n",a); //1
    if(n>=2){
        printf("the 2nd fibonacci no is %d\n",b); //1
    
    for(int i=3;i<=n;i++){  
        sum=a+b;
        a=b;
        b=sum;
        printf("the %dth fibonacci no is %d\n",i,sum);
        }
        //printf("the %dth fibonacci no is %d\n",n,sum);
    }
    return 0;
    
}