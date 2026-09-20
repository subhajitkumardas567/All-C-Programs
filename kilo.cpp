#include<stdio.h>

int main()
{
	int k,h,m,d;
	int choice;
	printf("enter the value in kilometer:");
	scanf("%d",&k);
	printf("enter your choice:(10 ,100 or 1000):");
	scanf("%d",&choice);
	//printf("the value in hecta is:",h = k × 10)
	//scanf("%d",&k);
	switch(choice)
	{
		case 10:
			h = k * 10;
			printf("the value in hecta is: %d\n",h);
			break;
			
			case 100:
				d=k*100;
				printf("the value in deca is :%d\n",d);
				break;
				case 1000:
					m=k*1000;
					printf("the value in metre is :%d\n",m);
					break;
					default:
						printf("invalid\n");
					
			
	}
	
	return 0;
}
