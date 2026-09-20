//write a program to decrypt  a string by adding 1 to the ascii values of its character.

#include<stdio.h>
void encrypt (char *c)
{
	char *ptr=c;
	while(*ptr!='\0'){
	*ptr=*ptr-1;
	ptr++;
}
}
int main()
{
	char c[]=" tvcibkju";
	encrypt(c);
	printf("the decrypted string is : %s \n", c);
	return 0;
}
