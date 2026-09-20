//strcpy function

#include<stdio.h>
#include<string.h>

int main()
{
	char *str="this one!";
	char str2[36];
	strcpy(str2,str);
	printf("Now the str2 is %s",str2);
	return 0;
}
