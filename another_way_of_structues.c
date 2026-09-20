#include<stdio.h>
#include<string.h>

struct employee{
	int code;
	float salary;
	char name[20];
};

int main()
{   

struct employee Subhajit = { 100, 2445.56, "Subhajit"};

printf("Code is: %d \n",Subhajit.code);
printf("Salary is: %f \n",Subhajit.salary);
printf("Name is: %s \n",Subhajit.name);

return 0;
}
