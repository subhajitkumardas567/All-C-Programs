#include <stdio.h>
void england(){
    printf("you are in england\n");
    return;
}
void australia(){
    printf("you are in australia\n");
    england(); //calling england
    return;
}
void india(){
    printf("you r in india!!!\n");
    australia(); //calling australia
    return;  //function stops at return
}
int main() {
    india(); //calling india 
    return 0;
}

