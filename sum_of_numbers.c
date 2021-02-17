//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input() {
    int num;
    printf("Enter the value of the number upto which the summation is required:\n");
    scanf("%d", & num);
    return num;
}
int sumof_n_num(int number) {
    int addition = 0, i;
    for (int i = 1; i <= number; i++) {

        addition = addition + i;
    }
    return addition;
}
void resultof_sum(int num, int sumof_n_num) {
    printf("The sum of first  %d numbers  is %d \n", num, sumof_n_num);
}
int main() {
    int upto, answer;
    upto = input();
    answer = sumof_n_num(upto);
    resultof_sum(upto, answer);
    return 0;
}
