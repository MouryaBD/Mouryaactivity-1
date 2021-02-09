//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include <math.h>
float input(char i,int j){
    float u;
    printf("Enter the value of %c%d coordinate: ",i,j);
    scanf("%f",&u);
    return u;
}
float dis_btw_2pts(float x1,float x2,float y1,float y2){
    float dis_btw_2pts=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dis_btw_2pts;
}
void answer(float x1,float x2,float y1,float y2,float dis_btw_2pts){
   
    printf("Distance between (%f,%f) and (%f,%f) points is %f ",x1,x2,y1,y2,dis_btw_2pts);
    
}
int main(){
    float x1,y1,x2,y2,len;
    x1=input('x',1);
    x2=input('x',2);
    y1=input('y',1);
    y2=input('y',2);
    len=dis_btw_2pts(x2,x1,y2,y1);
    answer(x1,x2,y1,y2,len);
    return 0;
}
