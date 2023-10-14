#include<stdio.h>
#include<conio.h>
#include<math.h>
long int btd(long int);
void dto(long int);
void main()
{
  long int n,d;
  clrscr();
  printf("Enter Binary number to convert into Octal =");
  scanf("%ld",&n);
  d=btd(n);
  dto(d);
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
void dto(long int n)
{
  if(n==0)
    return;
  else
  dto(n/8);
  printf("%ld",n%8);
}




