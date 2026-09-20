//print the AP 4,7,10,13.....upto nth terms

#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=4;i<=3*n+1;i=i+3)
	{
		printf("%d \n",i);
	}
	return 0;
}
