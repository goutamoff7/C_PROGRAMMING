#include<stdio.h>
#include<conio.h>
int avg(int,int,int);
void main()
{
  int a,b,c,d;
  clrscr();
  printf("Enter three Values:");
  scanf("%d%d%d",&a,&b,&c);
  d=avg(a,b,c);
  printf("The average of Three Number =%d",d);
  getch();
}
int avg(int x,int y,int z)
{
  int r;
  r=(x+y+z)/3;
  return r;
}
