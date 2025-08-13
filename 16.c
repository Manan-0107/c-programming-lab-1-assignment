#include <stdio.h>

int main() {
    float p,n,r,i;
    printf("enter the value of p");
    scanf("%f",&p);
    printf("enter the value of n");
    scanf("%f",&n);
    printf("enter the value of r");
    scanf("%f",&r);
    i=p*n*(r/100);
    printf("the interest collect for %f for year %f and rate %f is %f\n",p,n,r,i);
    
    return 0;
}