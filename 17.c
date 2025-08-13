#include <stdio.h>
int main() {
    float l,a,p;
    printf("enter the length of square");
    scanf("%f",&l);
    a=l*l;
    printf("the area of the square with length %f is %f\n",l,a);
    p=l*4;
    printf("the perimeter of the square with length%f is %f",l,p);
    return 0;
}