//WAP to find the sum of two fractions.
#include<stdio.h>

typedef struct {
    int val_nume;
    int val_deno;
}
add_2_fra;

add_2_fra input(int k) {
    add_2_fra u;
    printf("Enter the value of the numerator %d:\n", k);
    scanf("%d", & u.val_nume);
    printf("Enter the value of the denominator %d:\n", k);
    scanf("%d", & u.val_deno);
    return u;
}

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

add_2_fra calc_2_fra(add_2_fra first, add_2_fra second) {
    add_2_fra third;

    third.val_deno = gcd(first.val_deno, second.val_deno);

    third.val_deno = (first.val_deno * second.val_deno) / third.val_deno;

    third.val_nume = (first.val_nume) * (third.val_deno / first.val_deno) + (second.val_nume) * (third.val_deno / second.val_deno);

    int common_factor = gcd(third.val_nume, third.val_deno);
    third.val_deno = third.val_deno / common_factor;
    third.val_nume = third.val_nume / common_factor;
    return third;
}
void result(add_2_fra first, add_2_fra second, add_2_fra sum) {
    printf("Addition of fraction (%d/%d) and (%d/%d) is (%d/%d) \n", first.val_nume, first.val_deno, second.val_nume, second.val_deno, sum.val_nume, sum.val_deno);

}

int main() {
    add_2_fra first, second, sum;
    first = input(1);
    second = input(2);
    sum = calc_2_fra(first, second);
    result(first, second, sum);
    return 0;
}
