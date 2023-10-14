#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter 1st Value :");
  scanf("%d",&a);
  printf("Enter 2nd Value :");
  scanf("%d",&b);
  while(c!=0)
  {
    c=a%b;
    a=b;
    b=c;
  }
  printf("The GCD of two Number = %d",a);
  getch();
}

