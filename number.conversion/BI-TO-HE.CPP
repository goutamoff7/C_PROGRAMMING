#include<stdio.h>
#include<conio.h>
#include<math.h>
long int btd(long int);
void dth(long int);
void main()
{
  long int n,d;
  clrscr();
  printf("Enter Binary number to convert into Hexadecimal =");
  scanf("%ld",&n);
  d=btd(n);
  dth(d);
  getch();
}
long int btd(long int n)
{
  long int static sum=0,p=0;
  if(n==0)
    return sum;
  else
  {
    sum=sum+(n%10)*pow(2,p++);
    return btd(n/10);
  }
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
