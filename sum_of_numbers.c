//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int array[1000];
int input(){
int num;
printf("Enter the number of values to be summed :");
scanf("%d",&num)
return num
}
int sumof_n_num(int num,int array[]){
for(a=o;a<num;a++){
printf("Enter the number %dth value:",array[]);
scanf("%d",&array[a]);
}
for(a=0;a<num<a++){
sum=sum+array[a];
} return sum;
}
void resultof_sum(int num,int array[],int sum){
printf("the sum of %d listed numbers is %d ",num,array[a],sum);
}
int main(){
int sum,num;
num=input();
sum=sumof_n_num(array,num);
resultof_sum(num,sum);
return0:
}
