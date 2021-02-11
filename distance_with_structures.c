//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
struct position {
char  pos ;
}
float input(){
float u;
printf("Enter the value of the coordinate:");
scanf("%f",&u.pos);
return u;
}
float dis_btw_2pts(float x1,float x2,float y1,float y2){
float dis_btw_2pts=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
return dis_btw_2pts;
}
struct position x1;
printf("x1:",x1.pos);
return x1;
struct position x2;
printf("x2:",x2.pos);
return x2;
struct position y1;
printf("y1:",y1.pos);
return y1;
struct position y2;
printf("y2:",y2.pos);
return y2;

void answer (float x1,float x2,float y1,float y2,float dis_btw_2pts){
printf("Distance between (%f,%f) and (%f,%f) is %f",x1,x2,y1,y2,dis_btw_2pts);
}
int main(){
float x1,x2,y1,y2,len;
x1=input('x',1);
x2=input('x',2);
y1=input('y',1);
y2=input('y',2);
len=dis_btw_2pts(x2,x1,y2,y1);
answer(x1,x2,y1,y2,len);
return 0;
}
