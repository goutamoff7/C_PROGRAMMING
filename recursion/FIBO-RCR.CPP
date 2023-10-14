#include<stdio.h>
#include<conio.h>
void fibo(int);
int a=0,b=1,c,co=2;
void main()
{
  int n;
  clrscr();
  printf("Enter the Range: ");
  scanf("%d",&n);
  printf("%d",a);
  printf("%d",b);
  fibo(n);
  getch();
}
void fibo(int n)
{
  if(co<=n)
  {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
  }
    return fibo(co+1);
}

