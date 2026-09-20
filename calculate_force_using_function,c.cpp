//write a program to calculate the force of attraction on a body of mass m exerted by earth.

#include<stdio.h>

float force(float mass);
int main()
{
	float m;
	printf("Enter the value of mass: \n");
	scanf("%f",&m);
	printf("The force of attraction on a body of mass m exerted by earth is: %.3f\n",force(m));
	return 0;
}

float force(float mass)
{
    float result=mass * 9.8;
    return result;
}

