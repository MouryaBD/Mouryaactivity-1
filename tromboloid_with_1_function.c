//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
   float h,d,b,volume;
   printf("Enter the value of h,d,b:\n");
   scanf("%f%f%f",&h,&d,&b);
   volume=(((h*d*b)+(d/b))/3);
   printf("Volume of tromboloid is %f \n",volume);
   return 0;
}
