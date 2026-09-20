// Strong number using functions
#include<stdio.h>

// Function to calculate factorial of a digit
int factorial(int digit);

// Function to check whether number is Strong or not
void CheckStrong(int n);

int factorial(int digit){
    int fact = 1;               // initialize factorial

    // calculate factorial of digit
    for(int i = 1; i <= digit; i++){
        fact = fact * i;
    }
    return fact;                // return digit!
}

void CheckStrong(int n){
    int digit;                  // to store last digit
    int sum = 0;                // sum of factorials
    int temp = n;               // store original number

    // extract digits one by one
    while(n != 0){
        digit = n % 10;         // get last digit
        sum = sum + factorial(digit); // add digit!
        n = n / 10;             // remove last digit
    }

    // check Strong number condition
    if(sum == temp){
        printf("%d is a Strong number\n", temp);
    }
    else{
        printf("%d is not a Strong number\n", temp);
    }
}

int main(){
    int n;
    scanf("%d", &n);            // read input

    CheckStrong(n);             // check Strong number
    return 0;
}
