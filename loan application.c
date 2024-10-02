#include <stdio.h>
int main () {

float age,in;
printf("enter age,\n");
scanf("%f",&age);

printf("enter in\n");
scanf("%f",&in);

if(age == '>21')
{
printf("congratulations you qualify for a loan\n");
}

else if(age == '<21')
{

printf("unfortunately we are unable to offer you a loan at this time\n");
}


if(in =='>21000')
{
printf("congratulations you qualify for a loan\n");
}

else if(in == '<21000')
{
printf("unfortunately we are unable to offer you a loan at this time \n");
}

return 0;

















}