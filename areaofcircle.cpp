#include<stdio.h>

int main()
{
	float radius,area,height;
	float pi=3.14;
	
	printf("Enter the radius of cylinder:");
	scanf("%f",&radius);
	printf("Enter the height of cylinder:");
	scanf("%f",&height);
	
	area=pi*radius*radius*height;
	
	printf("The volume of the cylinder is: %f \n",area);
	return 0;
	
}
