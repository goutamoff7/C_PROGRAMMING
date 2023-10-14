#include<stdio.h>
#include<conio.h>
void dth(int);
void main()
{
  int n;
  clrscr();
  printf("Enter Decimal number to convert into Hexadecimal =");
  scanf("%d",&n);
  dth(n);
  getch();
}
void dth(int n)
{
  int d;
  if(n==0)
    return;
  else
  dth(n/16);
  if(n%16>=10)
  {
    d=(n%16)-10;
    printf("%c",d+'A');
  }
  else
  printf("%d",n%16);
}


