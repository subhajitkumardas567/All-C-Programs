//with return type with parameters
#include<stdio.h>
// int addTwoNumbers(int a,int b){
//     int c=a+b;
//     return c;
// }

// int main(){
// int val=addTwoNumbers(10,20);
// printf("%d",val);
// return 0;
// }

// //without return type with parameters
// void addTwoNumbers(int a , int b){
//     int c=a+b;
//     printf("%d \n",c);
// }

// int main(){
//      addTwoNumbers(20,20);
//      addTwoNumbers(15,45);
//      return 0;
// }

//with return type without parameters
// int addTwoNumbers(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     return a+b;
// }
// int main(){
//     int c=addTwoNumbers();
//     printf("%d", c);
//     return 0;
// }

//without return type without paramters
void addTwoNumbers(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a+b;
    printf("%d",c);
}
int main(){
    addTwoNumbers();
    return 0;
}
