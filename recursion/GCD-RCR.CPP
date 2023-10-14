#include<stdio.h>
#include<conio.h>
void gcd(int,int);
void main()
{
  int a,b;
  clrscr();
  printf("Enter A: ");
  scanf("%d",&a);
  printf("Enter B: ");
  scanf("%d",&b);
  gcd(a,b);
  getch();
}
void gcd(int a,int b)
{
  if(a==0)
    printf("\nThe GCD of A and B = %d",b);
  if(b==0)
    printf("\nThe GCD of A and B = %d",a);
  else
    gcd(b,a%b);
}
  l