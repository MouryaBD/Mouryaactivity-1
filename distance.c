//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include <math.h>
float input1(){
    float n1;
    printf("Enter the value of x1 coordinate: ");
    scanf("%f",&n1);
    return n1;
}
float input2(){
    float n2;
    printf("Enter the value of x2 coordinate:");
    scanf("%f",&n2);
    return n2;
}
float input3(){
    float n3;
    printf("Enter the value of y1 coordinate:");
    scanf("%f",&n3);
    return n3;
}
float input4(){
    float n4;
    printf("Enter the value of y2 coordinate:");
    scanf("%f",&n4);
    return n4;
}
float dis_btw_2pts(float x1,float x2,float y1,float y2){
    float dis_btw_2pts=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dis_btw_2pts;
}
void answer(float dis_btw_2pts){
    printf("Distance between two points  is %f ",dis_btw_2pts);
}
int main(){
    float x1,y1,x2,y2,len;
    x1=input1();
    x2=input2();
    y1=input3();
    y2=input4();
    len=dis_btw_2pts(x2,x1,y2,y1);
    answer(len);
    return 0;
}
