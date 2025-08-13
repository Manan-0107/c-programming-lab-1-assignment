#include <stdio.h>
int main() {
    float h,l,a;
    printf("enter the length of triangle");
    scanf("%f",&l);
    printf("enter the height of triangle");
    scanf("%f",&h);
    a=(h*l)/2;
    printf("the area of the triangle with length %f and height %f is%f\n",l,h,a);
   
    return 0;
}