//write an own version of strlen function from string.h

#include<stdio.h>
#include<string.h>
int my_strlen(char *st){ //strlen is already defined in string library this is why i changed it to my_strlen
	char *ptr=st;
	int len=0;
	while(*ptr!='\0')
	{
		len++;
		ptr++;
	}
	return len;
}
int main()
{
	char st[]="Subhajit";
	int l=my_strlen(st);
	printf("The length of this string is %d",l);
	return 0;
}
