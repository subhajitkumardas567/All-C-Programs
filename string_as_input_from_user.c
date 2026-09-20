//write a program to take a string as a input from the user using %c and %s. confirm that strings are equal.

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[34];
	char str2[34];
	char c;
	int i=0;
	
	printf("Enter the value of first string: \n");
	scanf("%s",str1);
	printf("Enter the value of second string character by character: \n");
	
	while(c!='\n')
	{
		fflush(stdin);
		scanf("%c",&c);
		str2[i]=c;
		i++;
	}
	str2[i-1]='\0'; // here [i-1] is used since the return value of both str1 and str2 is coming -ve due to the '\0' placed at the end of the string2.
	printf("The value of str1 is %s \n",str1);
	printf("The value of str2 is %s \n",str2);
	printf("The strcmp for these string return %d",strcmp(str1,str2));
	return 0; 
}
