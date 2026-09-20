#include<stdio.h>

int main()
{
	float celsius,fahrenheit;
	
	printf("Enter the temperature in Celsius:\n");
	scanf("%f",&celsius);
	fahrenheit=(9.0/5.0)*celsius+32;
	printf("The converted temperature is: %.3f \n",fahrenheit);
	return 0;
}
