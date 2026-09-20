//structures to pointers

#include<stdio.h>
#include<string.h>

struct employee{
	int code;
	float salary;
	char name[20];
};

int main(){
	struct employee e1;
	struct employee *ptr;
	ptr=&e1; //points to address of e1
	(*ptr).code=101; //or it can be written as ptr->code=101;
	printf("%d",e1.code);
	return 0;
}
