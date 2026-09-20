#include<stdio.h>

int main()
{
	int physicsmarks, chemistrymarks, mathsmarks;
	float total;
	
	printf("Enter the marks in physics:\n");
	scanf("%d",&physicsmarks);
	
	printf("Enter the marks in chemistry:\n");
	scanf("%d",&chemistrymarks);
	
	printf("Enter the marks in maths:\n");
	scanf("%d",&mathsmarks);
	
	total= (physicsmarks+ chemistrymarks+ mathsmarks)/3;
	
	if((total<40) || (physicsmarks<33) || (chemistrymarks<33) || (mathsmarks<33))
	{
		printf("Your percentage is %f, hence you have failed!\n",total);
    }
    else{
    	printf("Your percentage is %f, hence you have passed! \n",total);
	}
	return 0;
}
