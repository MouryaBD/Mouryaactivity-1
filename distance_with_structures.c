//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>

#include<math.h>

struct position {
    float pos_val;
};
float input(char q, int k) {
    struct position u;
    printf("Enter the value of the coordinate %c%d:", q, k);
    scanf("%f", & u.pos_val);

}
float dis_btw_2pts(float x1, float x2, float y1, float y2) {
    float dis_btw_2pts = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dis_btw_2pts;
}
void answer(float x1, float x2, float y1, float y2, float dis_btw_2pts) {
    printf("Distance between (%f,%f) and (%f,%f) is %f", x1, x2, y1, y2, dis_btw_2pts);
}
int main() {
    float x1, x2, y1, y2, len;
    x1 = input('x', 1);
    x2 = input('x', 2);
    y1 = input('y', 1);
    y2 = input('y', 2);
    len = dis_btw_2pts(x1,x2, y1,y2);
    answer(x1, x2, y1, y2, len);
    return 0;
}
