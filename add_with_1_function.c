#include<stdio.h>
int main()
{
   float Number1 ,Number2,sum;
   printf("Enter Number1:\n");
   scanf("%f",&Number1);
   printf("Enter Number2:\n");
   scanf("%f",&Number2);
   sum=Number1+Number2;
   printf("Sum of %f and %f is %f\n",Number1 ,Number2,sum);
   return 0;
}
