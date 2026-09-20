#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int nst=n; //no of stars
    int nsp=1; //no of spaces
    for(int i=1;i<=(2*n)+1;i++){ //for printing first line of 9 stars
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){ //for the first 5 stars from left
            printf("*");
        }
        for(int k=1;k<=nsp;k++){ //for the spaces in increasing odd order (1, 3, 5 etc...)
            printf(" ");
        }
        for(int j=1;j<=nst;j++){ //for the last reversed 5 stars on the right.
            printf("*");
    }
    nst--;
    nsp=nsp+2;
    printf("\n");
    }
    return 0;
}