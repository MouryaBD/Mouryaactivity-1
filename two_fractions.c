//WAP to find the sum of two fractions.
#include<stdio.h>

typedef struct {
    int val_nume;
    int val_deno;
}
fraction;

fraction input(int k) {
    fraction u;
    printf("Enter the value of the numerator %d:\n", k);
    scanf("%d", & u.val_nume);
    printf("Enter the value of the denominator %d:\n", k);
    scanf("%d", & u.val_deno);
    return u;
}

int gcd(int a, int b) {
    while (a!=b){
        if(a>b)
        a=a-b;
        else 
        b=b-a;
    }
    return a;
}

fraction calculate(fraction first, fraction second) {
    fraction third;
    int mygcd = gcd(first.val_deno, second.val_deno);
    third.val_deno = (first.val_deno * second.val_deno) / mygcd;
    third.val_nume = (first.val_nume) * (third.val_deno / first.val_deno) + (second.val_nume) * (third.val_deno / second.val_deno);
    int common_factor = gcd(third.val_nume, third.val_deno);
    third.val_deno = third.val_deno / common_factor;
    third.val_nume = third.val_nume / common_factor;
    return third;
}
void result(fraction first, fraction second, fraction sum) {
    printf("Addition of fraction (%d/%d) and (%d/%d) is (%d/%d) \n", first.val_nume, first.val_deno, second.val_nume, second.val_deno, sum.val_nume, sum.val_deno);

}

int main() {
    fraction first, second, sum;
    first = input(1);
    second = input(2);
    sum = calculate(first, second);
    result(first, second, sum);
    return 0;
}

