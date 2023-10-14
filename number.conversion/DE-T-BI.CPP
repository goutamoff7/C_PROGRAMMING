#include<stdio.h>
#include<conio.h>
void dtb(long int);
void main()
{
  long int n;
  clrscr();
  printf("Enter Decimal number to convert into Binary =");
  scanf("%ld",&n);
  dtb(n);
  getch();
}
void dtb(long int n)
{
  if(n==0)
    return;
  else
  dtb(n/2);
  printf("%ld",n%2);
}