#include<stdio.h>
#include<conio.h>
int lcheck(int,int);
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter two Values:");
  scanf("%d%d",&a,&b);
  c=lcheck(a,b);
  printf("%d is the largest Number ",c);
  getch();
}
int lcheck(int x,int y)
{
  if(x>y)
  return x;
  else
  return y;
}
