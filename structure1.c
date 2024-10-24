#include<stdio.h>
#include<string.h>
struct student{
 char name[25];
 char email[25];
 char regno[15];
 
 
 float marks;
 }student1,student2;
 
 int main()
 {
 strcpy(student1.name,"Israel");
 strcpy(student1.email,"israelword4@gmail.com");
 
 strcpy(student1.regno,"CT102/G/23017/24");
 student1.marks=81.22;
 
 printf("Name:%s\n",student1.name);
 printf("email:%s\n",student1.email);
 
 printf("reg no:%d\n",student1.regno);
 printf("marks:%f\n",student1.marks);
 }
 
 