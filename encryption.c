//write a program to encrypt  a string by adding 1 to the ascii values of its character.

#include<stdio.h>
void encrypt (char *c)
{
	char *ptr=c;
	while(*ptr!='\0'){
	*ptr=*ptr+1;
	ptr++;
}
}
int main()
{
	char c[]="subhajit";
	encrypt(c);
	printf("the encrypted string is : %s \n", c);
	return 0;
}
