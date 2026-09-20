//check additive prime number or not using functions
#include<stdio.h>
int CheckPrime(int n);
int CheckAdditivePrime(int n);

int CheckPrime(int n){
    int flag=0;
    if(n<=1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(!(n%i)){ //if not prime no break the loop
            flag=1;
            break;
        }
    }
    if(!flag){
        return 1;//prime no it is
    }
    else{
        return 0; //not a prime no
    }
}

int CheckAdditivePrime(int n){            
    int digit,sum=0,temp;
    temp=n;  //temp=23
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }

    if(CheckPrime(temp) && CheckPrime(sum)){   //23 && 5 -> both are prime, print yes
        printf("Yes");
    }
    else{
        printf("No");
    }
}

int main(){
    int n;
    scanf("%d", &n);            // read input

    CheckAdditivePrime(n);             // check prime number
    return 0;
}
