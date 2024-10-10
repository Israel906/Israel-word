//calculation of compound interest 
#include <stdio.h>
int main () {
    //declaration and initialisation 
    double principal;
    double rate; //4% interest rate
    double time; //2years 
    double n ;
    printf("Enter principal");
    scanf("%lf",&principal);
    
    printf("Enter rate");
    scanf("%lf",&rate);
    
    printf("Enter time");
    scanf("%lf",&time);
    
    printf("Enter n");
    scanf("%lf",&n);
    
    double amount = principal*((pow((1+rate/n),n*time)));
    printf("The amount(double)is %1f \n",amount);
    
    double CI =amount-principal;
    printf("The CI(double) is %1f",CI);
    
    return 0;
    }