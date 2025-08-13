#include <stdio.h>
int main() {
    float a,b,c,total,avg;
    printf("enter the marks of first subject");
    scanf("%f",&a);
    printf("enter the marks of second subject");
    scanf("%f",&b);
    printf("enter the marks of third subject");
    scanf("%f",&c);
    total=a+b+c;
    printf("the total of three subject is %f\n",total);
    avg=(a+b+c)/3;
    printf("the average of three subject is %f",avg);
    return 0;
}