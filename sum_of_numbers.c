//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int array[1000];
int input_num() {
    int num;
    printf("Enter the number of values to be summed :");
    scanf("%d", & num);
    return num;
}
int input_value(int num,int array[]){
    int a;
    for (a = 0; a <num; a++){
        printf("Enter the number %dth  value :",a+1);
        scanf("%d", &array[a]);
    }
}
int sumof_n_num(int num,int array[]) {
   int a, sum = 0;
   for(a=0;a<num;a++){
        sum = sum + array[a];
    }
    return sum;
}
void resultof_sum( int num,int sum) {
printf("The sum of %d listed  numbers is %d \n", num,sum);
}
int main() {
    int num,sum;
    int array[1000];
    num = input_num();
    input_value(num,array);
    sum= sumof_n_num(num,array);
    resultof_sum(num, sum);
    return 0;
}
