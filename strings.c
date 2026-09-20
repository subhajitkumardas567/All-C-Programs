// printing strings

#include<stdio.h>

int main()
{
	char str[]={'s','u','b','h','a','j','i','t','\0'};
	char *ptr=str;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
		
	}
	return 0;
}
