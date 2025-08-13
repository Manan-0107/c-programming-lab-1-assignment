#include <stdio.h>

int main() {
    int a,b;
    printf("enter the bytes which you want to convert into kilobytes");
    scanf("%d",&a);
    b=(a*1024);
    printf("the amount in kilobytes %d\n",b);
    printf("enter the bytes which you want to convert into megabytes");
    scanf("%d",&a);
    b=(a*1024)*1024;
    printf("the amount in megabytes %d\n",b);
    printf("enter the bytes which you want to convert into gigabytes");
    scanf("%d",&a);
    b=((a*1024)*1024)*1024;
    printf("the amount in gigabyte %d\n",b);
    return 0;
}