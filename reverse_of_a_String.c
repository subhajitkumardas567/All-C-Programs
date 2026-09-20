//program to find reverse of a string without using another string
#include <stdio.h>

void StringReverse(char str[100]);
void StringReverse(char str[100]){
   
    int len=0; //A=65, B=66
    
    for(len=0;str[len]!='\0';len++); //string length
    int j;
    for(int i=0,j=len-1;i<len/2;i++,j--){
        str[i]=str[i]+str[j]; // 65+66=131
        str[j]=str[i]-str[j]; // 131-66=65
        str[i]=str[i]-str[j];// 131-65=66
    }
}
int main() {
     char str[100];
     scanf("%[^\n]",str);
	StringReverse(str);
    printf("%s",str);
return 0;
}



