#include<stdio.h>
#include<conio.h>
void avg(int,int);
void main()
{
  int a,b;
  a=5,b=10;
  clrscr();
  avg(a,b);
  getch();
}
void avg(int x,int y)
{
  float r;
  r=(x+y)/2;
  printf("%f",r);
}


