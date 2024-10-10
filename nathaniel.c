#include <stdio.h>
int main(){

double principle,rate,time;

printf("enter principle");
scanf("%lf",&principle);

printf("enter rate");
scanf("%lf",&rate);

printf("enter time(in years)");
scanf("%lf",&time);

double simpleinterest= (principle*rate*time)/100;

printf("the simpleinterest is %1f",simpleinterest);
return 0;











}