#include <stdio.h>

int main() {
	// your code goes here
    char str[10]="sUbHaJiT";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
            
        }
    }
    printf("%s",str);    
    
}

