#include <stdio.h>
int main (){
int I,J;

int marks[2][3]={{77,60,96},{73,55,66,80}};
for (I=0;I<2;I++){
for(J=0;J<3;J++){

printf("marks[%d][%d]=%d\n",I,J,marks[I][J]);
}
}
return 0;





}