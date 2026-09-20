//wap to calculate power
#include<stdio.h>

int main(){
    int base,expo,res=1;
    scanf("%d %d ",&base,&expo);
    
    for(int i=1;i<=expo;i++){  
        res=res*base;
    }
    printf("the value of %d to the power %d is %d\n",base,expo,res);
    return 0;
    
}