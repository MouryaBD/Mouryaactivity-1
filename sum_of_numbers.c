//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
float input_num() {
    float num;
    printf("Enter the number of values to be summed :\n");
    scanf("%f", & num);
    return num;
}
void* input_value(float num,float arr[]){
    int a ;
    for (a = 0; a <num; a++){
    printf("Enter the number %dth  value :\n",a+1);
    scanf("%f", &arr[a]);
    }

}
float sumof_n_num(float num,float arr[]) {
   int a;
   float sum = 0;
   for(a=0;a<num;a++){
        sum = sum + arr[a];
    }
    return sum;
}
void resultof_sum(float num, float sum,float*arr) {
    int a; 
    printf("The listed  numbers are ");
    for(a=0;a<num;a++){
    printf(" %f,",arr[a]);
    }
    printf(" whose value is summed to get %f\n",sum);
}
int main() {
    float sum,*result;
    int num;
    num = input_num();
    float arr[num] ;
    input_value(num,arr);
    sum=sumof_n_num(num,arr);
    resultof_sum( num,sum,arr);
    return 0;
}
