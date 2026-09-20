#include <stdio.h>

int main() {
	// your code goes here
    for(int i=1;i<=4;i++){
        int a=i-1;// karon first line a kichu nei, ar second line a for i=2, 1 print hobe
        for(int m=1;m<=4-i;m++){ //for spaces first
            printf(" ");
        }
        for(int j=1;j<=i;j++){  //forward alphabets
            printf("*");
        }
        for(int k=1;k<=i-1;k++){ //printing the reverse alphabets
            printf("*");
            //a--;//decrementing to print numbers
        }
        
      
    printf("\n");
    }
    for(int i=3;i>=1;i--){
        
        for(int m=1;m<=4-i;m++){ //for spaces first
            printf(" ");
        }
        for(int j=1;j<=i;j++){  //forward alphabets
            printf("*");
        }
        for(int k=1;k<=i-1;k++){ //printing the reverse alphabets
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

