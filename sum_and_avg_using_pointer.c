//write a program using a function to calculate the sum and average of two numbers using pointers to print the values of sum and avg in main()
 #include<stdio.h>
 
 void sumAndAvg(int a, int b, int *sum, float *avg)
 {
    *sum=a+b;
    *avg=(float)(*sum)/2;
 }
 
 int main()
 {
    int i,j,sum;
    float avg;
    printf("Enter the value of i: \n");
    scanf("%d",&i);
    printf("Enter the value of j: \n");
    scanf("%d",&j);
    sumAndAvg(i,j,&sum,&avg);  //passing the values to the function.
    printf("The value of sum is:%d \n",sum);
    printf("The value of avg is:%f \n",avg);
    
    return 0;
 }
 
