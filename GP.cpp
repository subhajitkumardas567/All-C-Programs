//wap to print the GP series 1,2,4,8,16,32 upto  n terms.

#include<stdio.h>
int main()
{
	int n;
	int i=1;
	int a=1;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i;i<=n;i++)
	{
		
		printf("%d\n",a);
		a=a*2;
	}
	return 0;
}

