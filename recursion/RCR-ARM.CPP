#include<stdio.h>
#include<conio.h>
#include<math.h>
int arm(int);
void main()
{
  int n,m,check;
  clrscr();
  printf("Enter the Number =");
  scanf("%d",&n);
  m=n;
  check=arm(n);
  if(check==m)
    printf("This is a Armstrong Number");
  else
    printf("This in not a armstrong Number");
  getch();
}

int arm (int n)
{
  int d;
  if(n==0)
    return 0;
  else
  {
    d=n%10;
    return pow(d,3)+arm(n/10);
  }
}

