//pascal's triangle using combination using functions

#include<stdio.h>

int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}

int combination(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main() {
    int n;  
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){ //printing the spaces
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int iCj=combination(i,j); //passing the value of n and r to i and j respectively
            printf("%d ",iCj);
        }
        printf("\n");
    }
    return 0;
}