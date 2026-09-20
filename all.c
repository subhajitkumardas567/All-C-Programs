//diff of sumof even and odd indices
#include <stdio.h>

void display(int NewArr[],int length);

void display(int NewArr[],int length){
    int i,sumEven=0,sumOdd=0;
       for(int i=0;i<length;i++){ //loop runs for length-1=4 times
            if(i%2==0){
                 sumEven=sumEven+NewArr[i];
            }
            else{
                sumOdd=sumOdd+NewArr[i];
            }
       }
       int diff=sumOdd-sumEven;
       printf("%d  ",diff);
       
       }
           //10 20 50 86 75 90
         //->0  1  2  3  4  5
         //sum of even indices-> 10+50+75=135
         //sum of odd indices-> 20+86+90=196
         //difference=61
       
       
    //   for(int i=0;i<=length;i++){
    //       printf("%d ",NewArr[i]);
    //   }
   

int main() {
	
	int arr[10]={10,20, 50, 86, 75, 90};
	
	int length=sizeof(arr)/sizeof(arr[0]);//len=5x4=20/4 = 5 
	
	//taking array as input
	
	display(arr,length);
	return 0;
}
    


