#include<stdio.h>
#include<conio.h>
void dth(long int);
void main()
{
  long int n;
  clrscr();
  printf("Enter Decimal number to convert into Hexadecimal =");
  scanf("%ld",&n);
  dth(n);
  getch();
}
void dth(long int n)
{
  long int d;
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
  printf("%ld",n%16);
}


