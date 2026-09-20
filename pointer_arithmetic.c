//pointer arithmetic

#include<stdio.h>

int main()
{
	int i=67;
	int *ptr= &i;
	printf("The value of ptr before increment is %u \n",ptr);
	ptr++;          //integer value has memory of 4 bytes so each time it increments by 4.
	ptr++;
	printf("The value of ptr after increment is %u \n",ptr);
	return 0;
}
