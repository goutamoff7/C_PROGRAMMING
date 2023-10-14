#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1416
void main()
{
  int angle=30;
  clrscr();
  printf("\n%f",sin(pi/180*angle));
  printf("\n%f",cos(pi/180*angle));
  printf("\n%f",tan(pi/180*angle));
  printf("\n%f",1/sin(pi/180*angle)); //cosec
  printf("\n%f",1/cos(pi/180*angle)); //sec
  printf("\n%f",1/tan(pi/180*angle)); //cot
  getch();
}


