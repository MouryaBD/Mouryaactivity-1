//WAP to find the sum of n fractions.
#include<stdio.h>

typedef struct {
    int nume;
    int deno;
}
fraction;
int input_num() {
    int num;
    printf("Enter the number of fractions to be summed:\n");
    scanf("%d", & num);
    return num;
}
fraction input_value(int num, fraction arr[]) {
    int a;
    for (a = 0; a < num; a++) {
        printf("Enter the %d th numerator and denominator value: \n", a + 1);
        scanf("%d%d", & arr[a].nume, & arr[a].deno);
    }
}
int one_gcd(int a, int b) {
    if (b == 0)
        return a;
    return one_gcd(b, a % b);
}
fraction calculate_sumof2(fraction first, fraction second) {
    fraction third;
    third.deno = (first.deno * second.deno);
    third.nume = (first.nume) * (second.deno) + (second.nume) * (first.deno);
    int common_factor = one_gcd(third.nume, third.deno);
    third.deno = third.deno / common_factor;
    third.nume = third.nume / common_factor;
    return third;
}

fraction calculate_sumof_n(int num, fraction arr[]) {
    fraction total;
    total.nume = 0;
    total.deno = 1;
    for (int a = 0; a < num; a++) {
        total = calculate_sumof2(total, arr[a]);
    }

    return total;
}

void result(int num, fraction arr[], fraction total) {
    int a;
    printf("The fractions are");
    for (a = 0; a < num; a++) {
        printf("(%d/%d),", arr[a].nume, arr[a].deno);
    }
    printf(" whose value is summed to get (%d/%d)\n", total.nume, total.deno);
}
int main() {
    fraction sum;
    int num;
    num = input_num();
    fraction arr[num];
    input_value(num, arr);
    sum = calculate_sumof_n(num, arr);
    result(num, arr, sum);
    return 0;
}
