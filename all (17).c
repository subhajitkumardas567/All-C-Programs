#include <stdio.h>
int maxProfit(int* price,int n);
int maxProfit(int* price,int n){
    int profit=0,i=0;
    while(i<n-1){
        while(i<n-1 && price[i]>=price[i+1])
            i++;
            if(i==n-1){
                break;
            }
            int min=price[i];
            while(i<n-1 && price[i]<=price[i+1]){
                i++;
            }
                int max=price[i];
                profit=profit+(max-min);
            
            
        
    }
    return profit;
}

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("%d\n",maxProfit(arr,n));
   return 0;
}

