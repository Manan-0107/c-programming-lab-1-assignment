#include <stdio.h>

int main() {
    float a,b;
    printf("enter the fahrenheit which you want to convert into celsius");
    scanf("%f",&a);
    b=5*(a/9) - 32;
    printf("the amount in fahrenheit %f\n",b);
    
    return 0;
}