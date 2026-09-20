//wap to print gp 3,12,48 upto n terms...
#include<stdio.h>
int main()
{
	int n;
	int i=3;
	int a=3;
	printf("enter the number:");
	scanf("%d",&n);
	for(int i;i<=n;i++)
	{
		
		printf("%d\n",a);
		a=a*4;
	}
	return 0;
}
