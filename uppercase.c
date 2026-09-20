#include<stdio.h>

int main() // 97-122 ASCII values for small a-z
{
	char ch;
	printf("Enter the character: \n");
	scanf("%c",&ch);
	if(ch<=122 && ch>=97) 
	{
		printf("The entered character is lowercase.");
	}
	else 
	{
		printf("The entered character is uppercase.");
	}
	return 0;
}
