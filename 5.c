#include <stdio.h>

int main() {
    float a,b,c;
    printf("enter the no 1");
    scanf("%f",&a);
    printf("enter the no 2");
    scanf("%f",&b);
    c=a+b;
    printf("the sum of two numbers %f + %f = %f\n",a,b,c);
    c=a-b;
    printf("the subtraction of these two numbers %f - %f = %f\n",a,b,c);
    c=a*b;
    printf("the multiplication of these two numbers %f X %f = %f\n",a,b,c);
    c=a/b;
    printf("the multiplication of these two numbers %f / %f = %f\n",a,b,c);
    
    return 0;
}