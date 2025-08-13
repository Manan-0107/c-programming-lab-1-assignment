#include <stdio.h>

int main() {
    float a,b;
    printf("enter the celsius which you want to convert into fahrenheit");
    scanf("%f",&a);
    b=9*(a/5) + 32;
    printf("the amount in fahrenheit %f\n",b);
    
    return 0;
}