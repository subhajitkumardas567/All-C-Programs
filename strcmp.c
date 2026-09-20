//strcmp

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[34]="hel";
	char *str2="hello";
	int val=strcmp(str1,str2);
	printf("Now the val is %d",val);
	return 0;
}
