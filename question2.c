//odd indexed elements to its second multiple and value of even indexed elements to increment it by 10
#include <stdio.h>

void display(int NewArr[],int length);
void display(int NewArr[],int length){
    int i,count=0,x=80;
       for(int i=0;i<=length;i++){ //loop runs for length-1=4 times
       if(NewArr[i]>x){
           count++;
       }
           //10 20 50 86 75 90
         //->20 40 60 172 85 180
       }
       printf("%d",count);
    //   for(int i=0;i<=length;i++){
    //       printf("%d ",NewArr[i]);
    //   }
   }

int main() {
	
	int arr[10]={10,20, 50, 86, 75, 90};
	int x=4;
	int length=sizeof(arr)/sizeof(arr[0]);//len=5x4=20/4 = 5 
	
	//taking array as input
	
	display(arr,length);
	return 0;
}
    


