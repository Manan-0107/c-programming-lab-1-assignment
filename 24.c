#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the first value");
    scanf("%d",&a);
    printf("enter the second value");
    scanf("%d",&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("after swaping value we get are %d and %d",a,b);
    return 0;

}
