#include<stdio.h>

void display(); //Function prototype

int main() //Function call.
{
	printf("Initializing display function \n");
	display ();
	printf("Display function finished its work. \n");
	return 0;
}

//Function definition.
void display ()
{
	printf("This is display\n");
}

