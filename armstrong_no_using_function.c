// Armstrong number using functions
#include<stdio.h>

// Function to count number of digits in the number
int lengthOfNumber(int n);

// Function to calculate power (base^expo)
int powerOfNumber(int base, int expo);

// Function to check whether the number is Armstrong or not
void CheckArmstrong(int n, int length);

int lengthOfNumber(int n){
    int count = 0;            // to store number of digits

    // loop runs until number becomes 0
    while(n != 0){
        n = n / 10;           // remove last digit
        count++;              // increase digit count
    }
    return count;             // return total digits
}

int powerOfNumber(int base, int expo){
    int prod = 1;             // initialize product as 1

    // multiply base expo times
    for(int i = 1; i <= expo; i++){
        prod = prod * base;   // calculate base^expo
    }
    return prod;              // return power value
}

void CheckArmstrong(int n, int length){
    int digit;                // to store last digit
    int sum = 0;              // to store sum of powers
    int temp = n;             // store original number

    // extract digits one by one
    while(n != 0){
        digit = n % 10;       // get last digit
        sum = sum + powerOfNumber(digit, length); // add digit^length
        n = n / 10;           // remove last digit
    }

    // compare sum with original number
    if(sum == temp){
        printf("%d is an Armstrong number\n", temp);
    }
    else{
        printf("%d is not an Armstrong number\n", temp);
    }
}

int main(){
    int n;
    scanf("%d", &n);                  // read input number

    int length = lengthOfNumber(n);   // get number of digits
    CheckArmstrong(n, length);        // check Armstrong

    return 0;
}
