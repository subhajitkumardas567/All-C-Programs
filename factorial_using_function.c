// //combination without using functions
// #include <stdio.h>

// int main() {
//     int n,r;
//     scanf("%d %d",&n,&r);
//     int nfact=1,rfact=1;
//     int nrfact=1;
//     for(int i=2;i<=n;i++){
//         nfact=nfact*i;
//     }
//     for(int i=2;i<=r;i++){
//         rfact=rfact*i;
//     }
//     for(int i=2;i<=n-r;i++){
//         nrfact=nrfact*i;
//     }
//     int ncr=nfact/(rfact*nrfact);
//     printf("the combination is: %d",ncr);
//     return 0;
// }

//factorial using functions
////with return type with paramter

#include<stdio.h>
//
//int factorial(int x){
//    int fact=1;
//    int i;
//    for( i=2;i<=x;i++){
//        fact=fact*i;
//    }
//    return fact;
//}
//
//int main() {
//    int x;
//    scanf("%d",&x);
//    int fact=factorial(x);
//    printf("the factorial is: %d",fact);
//    return 0;
//}

///without return type with paramter

//int factorial(int x){
//    int fact=1;
//    int i;
//    for( i=2;i<=x;i++){
//        fact=fact*i;
//    }
//    printf("%d",fact);
//}
//
//int main() {
//    int fact=factorial(6);
//    return 0;
//}

///with return type without paramter
//int factorial(){
//    int fact=1;
//    int i;
//    int x;
//    scanf("%d",&x);
//    for( i=2;i<=x;i++){
//        fact=fact*i;
//    }
//    return fact;
//}
//
//int main() {
//    int res=factorial();
//    printf("%d",res);
//    return 0;
//}

///without return type without paramter
void factorial(){
    int fact=1;
    int i;
    int x;
    scanf("%d",&x);
    for( i=2;i<=x;i++){
        fact=fact*i;
    }
    printf("%d",fact);
}

int main() {
	factorial();
    return 0;
}
