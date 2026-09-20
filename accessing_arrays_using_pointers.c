// accessing arrays using pointers

#include<stdio.h>

int main()
{
	int marks[4];
	int *ptr;
	int i;
	ptr=&marks[0];
	for (i=0;i<4;i++)
	{
		printf("Enter the marks for student %d : \n",i+1);
		scanf("%d",ptr);
		ptr++;
		
	}
	for (i=0;i<4;i++)
	{
		printf("The marks for student %d is: %d \n",i+1,marks[i]);
		
	}
	return 0;
}
