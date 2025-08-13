#include <stdio.h>
int main() {
    float net_sales,gross_sales,discount;
    printf("enter the gross sales");
    scanf("%f",&gross_sales);
    net_sales=gross_sales - (gross_sales/10) ;
    printf("the net sales is %f",net_sales);
   
    return 0;

}
