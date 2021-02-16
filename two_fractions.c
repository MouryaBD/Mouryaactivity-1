//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct {
    float val_nume;
    float val_deno;
}add_2_fra;
add_2_fra input(int k) {
    add_2_fra u;
    printf("Enter the value of the numerator %d:\n", k);
    scanf("%f", & u.val_nume);
    printf("Enter the value of the denominator %d:\n", k);
    scanf("%f", & u.val_deno);
    return u;
}
float calc_2_fra(add_2_fra first, add_2_fra second) {
    float calc_2_fra = ((first.val_nume / first.val_deno) + (second.val_nume / second.val_deno));
    return calc_2_fra;
}
void result(add_2_fra first, add_2_fra second, float calc_2_fra) {
    printf("Addition of fraction (%f/%f) and (%f/%f) is %f \n", first.val_nume, first.val_deno, second.val_nume, second.val_deno, calc_2_fra);
}
int main() {
    add_2_fra first, second;
    float sum;
    first = input(1);
    second = input(2);
    sum = calc_2_fra(first, second);
    result(first, second, sum);
    return 0;
}
