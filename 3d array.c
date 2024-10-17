#include <stdio.h>
int main (){
int I,J,k;

int marks[2][2][3]={{77,60,96},{73,55,66},{77,60,96},{73,55,66}};
for (I=0;I<2;I++){
for(J=0;J<3;J++){
for (k=0;k<3;k++){

printf("marks[%d][%d][%d]=%d\n",I,J,k,marks[I][J][k]);
}
}
}
return 0;





}