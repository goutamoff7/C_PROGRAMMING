#include<stdio.h>
#include<conio.h>
void dto(long int);
void main()
{
  long int n;
  clrscr();
  printf("Enter Decimal number to convert into Octal =");
  scanf("%ld",&n);
  dto(n);
  getch();
}
void dto(long int n)
{
  if(n==0)
    return;
  else
  dto(n/8);
  printf("%ld",n%8);
}


