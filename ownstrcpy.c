//write your own vesion of strcpy funtion

#include<stdio.h>
#include<string.h>

int my_strcpy(char *target,char *source){
	char *ptr=target;  //save the starting address of target
	while (*ptr!='\0')  //copy each character from source to target
	{
		*target=*source;
		target++;
		source++;
	
    }
    *target='\0'; //adding null character to the end of the string\
    return ptr; 
}
int main()
{
	char source[]="Subhajit";
	char target[45]; // ensure enough space for target string
	
	my_strcpy(target,source);
	
	printf("The source is %s \n",source);
	printf("The target is %s \n",target);
	return 0;
}
