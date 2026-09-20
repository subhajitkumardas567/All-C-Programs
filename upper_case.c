//wap to find out character is in uppercase or not

#include <stdio.h>

int main() {
    char c;

    printf("enter the character: ");
    scanf("%c", &c);

    if (c>='A' && c<='Z') {
        printf("%c is an uppercase letter \n", c);
    } else {
        printf("%c is not an uppercase letter \n", c);
    }

    return 0;
}

