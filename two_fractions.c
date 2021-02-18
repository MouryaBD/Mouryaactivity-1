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

int gcd(int a, int b) {
   if (a == 0)
      return b;
   return gcd(b%a, a);
}
void calc_2_fra(add_2_fra first, add_2_fra second) {
   add_2_fra third;
   
   third.val_deno = gcd(first.val_deno, second.val_deno);
    
   third.val_deno = (first.val_deno*second.val_deno) / third.val_deno;
   
   third.val_nume = (first.val_nume)*(third.val_deno/first.val_deno) + (second.val_nume)*(third.val_deno/second.val_deno);
   
   int common_factor = gcd(third.val_nume, third.val_deno);
   float d = third.val_deno/common_factor;
   float n = third.val_nume/common_factor;
   printf("Addition of fraction (%f/%f) and (%f/%f) is (%f/%f) \n", first.val_nume, first.val_deno, second.val_nume, second.val_deno, n,d);
   
}

int main() {
    add_2_fra first, second;
    first = input(1);
    second = input(2);
    calc_2_fra(first, second);
    return 0;
}
