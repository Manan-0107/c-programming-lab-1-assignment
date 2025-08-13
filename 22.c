#include <stdio.h>
int main() {
    float net_salary,gross_salary,allowance,deduction;
    printf("enter the gross_salary");
    scanf("%f",&gross_salary);
    net_salary=gross_salary - (gross_salary/10) ;
    printf("the net salary is %f",net_salary);
   
    return 0;
}