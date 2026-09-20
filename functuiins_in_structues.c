#include<stdio.h>
#include<string.h>

struct employee{
	int code;
	float salary;
	char name[20];
};

void show(struct employee emp){

printf("The code of the employee is: %d \n",emp.code);
printf("The salary of the employee is: %f \n",emp.salary);
printf("The name of the employee is: %s \n",emp.name);
}

int main(){
	struct employee e1;
	struct employee *ptr;
	ptr=&e1; //points to address of e1
	(*ptr).code=101; //or it can be written as ptr->code=101;
	(*ptr).salary=3456.78;
	strcpy((*ptr).name,"Subhajit");
	
	show(e1);
	printf("The code of the employee is: %d \n",e1.code);
	return 0;
}
