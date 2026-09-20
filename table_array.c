// create an array of size 3x10 containing multipliction table of the no.s 2,7,9 respectively

#include<stdio.h>

int main()
{
	int mulTable[3][10];
	int i;
	int n;
	for(i=0;i<n;i++);{
	mulTable[0][i]=2*(i+1);
	}

    for(i=0;i<n;i++){
    	printf("2 x %d = %d \n",i+1,mulTable[0][i]);
	}
	
	for(i=0;i<n;i++){
	mulTable[0][i]=7*(i+1);
     }

    for(i=0;i<n;i++){
    	printf("7 x %d = %d \n",i+1,mulTable[0][i]);
	}
	
	for(i=0;i<n;i++){
	mulTable[0][i]=9*(i+1);
     }
    for(i=0;i<n;i++){
    	printf("9 x %d = %d \n",i+1,mulTable[0][i]);
	}

	
return 0;
}
