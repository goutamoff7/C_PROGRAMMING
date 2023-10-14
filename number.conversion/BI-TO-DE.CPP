#include<stdio.h>
#include<conio.h>
#include<math.h>
long int btd(long int);
void main()
{
  long int n;
  clrscr();
  printf("Enter Binary number to convert into Decimal =");
  scanf("%ld",&n);
    printf("%ld",btd(n));
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



