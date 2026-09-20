//odd indexed elements to its second multiple and value of even indexed elements to increment it by 10
#include <stdio.h>

void display(int NewArr[],int length);
void display(int NewArr[],int length){
    // int max=NewArr[0];
    int i;
       for(int i=0;i<=length;i++){ //loop runs for length-1=4 times
       if(i%2==0){
           NewArr[i]=NewArr[i]+10;
       }
       else{
           NewArr[i]=NewArr[i]*2;
       }
           //10 20 50 86 75 90
         //->20 40 60 172 85 180
       }
       for(int i=0;i<=length;i++){
           printf("%d ",NewArr[i]);
       }
       
    //   printf("%u\n", arr);  //prints base address
    //   printf("%u\n ", &arr[0]); //prints base address
    //   printf("%u\n", &arr); //prints base address
    //   printf("%u", &arr+1); //base address+(size*length)
   }

int main() {
	int arr[5];
	
	int length=sizeof(arr)/sizeof(arr[0]);//len=5x4=20/4 = 5 
	for(int i=0;i<=length;i++){
	    scanf("%d",&arr[i]);//taking array as input
	}
	display(arr,length);
	return 0;
}
    


