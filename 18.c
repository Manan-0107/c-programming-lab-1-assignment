#include <stdio.h>
int main() {
    float l,a,b,p;
    printf("enter the length of rectangle");
    scanf("%f",&l);
    printf("enter the breadth of rectangle");
    scanf("%f",&b);
    a=l*b;
    printf("the area of the rectangle with length %f and breadth %f is %f\n",l,b,a);
    p=2*(l+b);
    printf("the perimeter of the rectangle with length%f and breadth is %f is %f",l,b,p);
    return 0;
}