//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int arr[];
int input_num() {
    int num;
    printf("Enter the number of values to be summed :");
    scanf("%d", & num);
    return num;
}
int* input_value(int num,int arr[]){
    int a ;
    for (a = 0; a <num; a++){
    printf("Enter the number %dth  value :",a+1);
    scanf("%d", &arr[a]);
    }
    return arr;
}
int sumof_n_num(int num,int arr[num]) {
   int a, sum = 0;
   for(a=0;a<num;a++){
        sum = sum + arr[a];
    }
    return sum;
}
void resultof_sum(int num, int sum,int*arr) {
    int a; 
    printf("The listed  numbers are ");
    for(a=0;a<num;a++){
    printf(" %d,",arr[a]);
    }
    printf(" whose value is summed to get %d",sum);
}
int main() {
    int num,sum,*result;
    num = input_num();
    int arr[num] ;
    result=input_value(num,arr);
    sum=sumof_n_num(num,result);
    resultof_sum( num,sum,result);
    return 0;
}
