//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct{
float val_nume;
float val_deno;
}add_2_fra;
add_2_fra sum(fra,fra);
int main()
{
float nume1,deno1,nume2,deno2;
printf("Enter the values for first fraction numeratour and denominator respectively:");
scanf("%f%f",&nume1,&deno1);
printf("Enter the value for second fraction numerator and denominator respectively:");
scanf("%f%f",&nume2,&deno2);
add_2_fra first={nume1,deno1};
add_2_fra second ={nume2,deno2);
}
void result(){
fra result=sum(first,second);
printf("result=%f/%f",result.nume,result.deno);
}
add_2_fra sum (fra first,fra second){
add_2_fra result={(first.nume*second.deno)+(second.nume*first.deno),(first.deno*second.deno)};
return result;
}
