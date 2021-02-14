//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
typedef struct {
    float pos_val_x;
    float pos_val_y;
}
position;
position input(int k) {
    position u;
    printf("Enter the value of the coordinate x%d:", k);
    scanf("%f", & u.pos_val_x);
    printf("Enter the value of the coordinate y%d:", k);
    scanf("%f", & u.pos_val_y);
    return u;
}
float dis_btw_2pts(position first, position second) {
    float dis_btw_2pts = sqrt(pow(second.pos_val_x - first.pos_val_x, 2) + pow(second.pos_val_y - first.pos_val_y, 2));
    return dis_btw_2pts;
}
float answer(position first, position second, float dis_btw_2pts) {
    printf("Distance between (%f,%f) and (%f,%f) is %f", first.pos_val_x, first.pos_val_y, second.pos_val_x, second.pos_val_y, dis_btw_2pts);
}
int main() {
    position first, second;
    float len;
    first = input(1);
    second = input(2);
    len = dis_btw_2pts(first, second);
    answer(first, second, len);
    return 0;
}
