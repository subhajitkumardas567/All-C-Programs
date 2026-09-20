#include<stdio.h>
#include<math.h>

int main()
{
	float c;
	float f;
	float k;
	float r;
	int choice;
	printf("enter the temperature in centigrade:");
	scanf("%.2f",&c);
	switch(choice)
	{
		case 1:
			f=(1.8*c+32);
			printf("the temperature in fahrenheit is: %f" ,&f);
			break;
			case 2:
				k=c+273.15;
				printf("the tempetaure in kelvin:  %f",&k);
				break;
				case 3:
					r=c*0.8;
					printf("the tempetaure in romar:  %f",&r);
					break;
					default:
						printf("invalid.");
					
	}
	return 0;
}
