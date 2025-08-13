#include <stdio.h>
int main() {
    int a,b,c;
    printf("enter the marks of first subject");
    scanf("%d",&a);
    printf("enter the marks of second subject");
    scanf("%d",&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("after swaping value we get are %d and %d",a,b);
    return 0;
}