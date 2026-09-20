// // create an array of size 3x10 containing multipliction table of the no.s 2,7,9 respectively using functions

#include<stdio.h>

void printTable(int *mulTable,int num,int n){
	printf("The multiplication table of %d is : \n", num);
	int i;
	for (i=0;i<n;i++)
	{
		mulTable[i]=num*(i+1);
	}
	for (i=0;i<n;i++)
	{
		printf("%d x %d = %d \n",num, i+1 , mulTable[i]);
	}
}
int main()
{
	int mulTable[3][10];
	printTable(mulTable[0],2,10);
	printTable(mulTable[1],7,10);
	printTable(mulTable[2],9,10);
	
	return 0;

}

