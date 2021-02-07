//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
float input()
{
float num;
printf("Enter the number:");
scanf("%f",&num);
return num ;
}
float sum(float num1,num2)
{
float sum;
sum=num1+num2;
return sum;
printf("Sum of two number is %f",num);
}
int main()
{
float a,b,s;
a=input();
b=input();
s=sum(a,b);
output(s);
return 0;
}
