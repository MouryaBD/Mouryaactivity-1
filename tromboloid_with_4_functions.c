//Program  to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
    float num;
    printf("Enter the value:");
    scanf("%f",&num);
    return num;
}
    float volume(float h,float d,float b)
{
    float volume=(((h*d*b)+(d/b))/3);
    return volume;
}
    float output(float volume)
{
    printf("Volume of tromboloid is %f",volume);
}
    int main()
{
    float h,d,b,v;
    h=input(h);
    d=input(d);
    b=input(b);
    v=volume(h,d,b);
    output(v);
    return 0;
}

