// swapping numbers using call by reference.
#include<stdio.h>

void wrong_swap(int a,int b);
void swap(int *a,int *b);

int main()
{
	int x=4,y=3;
	printf("The value before swap is %d and %d \n",x,y );
	//wrong_swap will not work due to call by value
	swap(&x,&y); //swap will work due to call by reference
	printf("The value after swap is %d and %d \n",x,y);
	
	return 0;
}
void wrong_swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void swap(int *a,int *b)
{
	int temp;
	temp= *a;  //(*)--- operator is value at address
	*a= *b;
	*b= temp;
}

