//max element in an array
#include <stdio.h>

void display(int NewArr[],int length);
void display(int NewArr[],int length){
    int max=NewArr[0];
    int i;
       for(int i=1;i<length;i++){ //loop runs for length-1=4 times
       if(max<NewArr[i]){
           max=NewArr[i];
       }
           
       }
       printf("%d",max);
    //   printf("%u\n", arr);  //prints base address
    //   printf("%u\n ", &arr[0]); //prints base address
    //   printf("%u\n", &arr); //prints base address
    //   printf("%u", &arr+1); //base address+(size*length)
   }

int main() {
	int arr[5];
	
	int length=sizeof(arr)/sizeof(arr[0]);//len=5x4=20/4 = 5 
	for(int i=0;i<length;i++){
	    scanf("%d",&arr[i]);//taking array as input
	}
	display(arr,length);
	return 0;
}
    


