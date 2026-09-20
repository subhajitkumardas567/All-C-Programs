#include<stdio.h>

int main()
{
	float s,p,r,t;
	
	printf("Enter the principal amount: %f \n");
	scanf("%f",&p);
	printf("Enter the rate of interest: %f \n");
	scanf("%f",&r);
	printf("Enter the time period: %f \n");
	scanf("%f",&t);
	s=(p*r*t)/100;
	 
	printf("The simple interest per annum is: %.2f \n",s);
	return 0;
	
}
