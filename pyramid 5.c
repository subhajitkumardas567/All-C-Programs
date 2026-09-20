#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int nst=n; //no of stars
    int nsp=1; //no of spaces
    for(int i=1;i<=7;i++){ //for printing first line of 9 stars
        printf("%d",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nst;j++){ //for the first 5 stars from left
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){ //for the spaces in increasing odd order (1, 3, 5 etc...)
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){ //for the last reversed 5 stars on the right.
            printf("%d",a);
            a++;
    }
    nst--;
    nsp=nsp+2;
    printf("\n");
    }
    return 0;
}