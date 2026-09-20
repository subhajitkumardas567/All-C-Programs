//prime number using functions
#include<stdio.h>

void CheckPrime(int n);

void CheckPrime(int n){            
    int flag=0;
    for(int i=2;i<=n/2;i++){
        if(!(n%i)){
            flag=1;
            break;
        }
        
    }

    // check Strong number condition
    if(!flag){ //flag=0
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number\n", n);
    }
}

int main(){
    int n;
    scanf("%d", &n);            // read input

    CheckPrime(n);             // check Strong number
    return 0;
}
