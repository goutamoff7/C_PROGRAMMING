#include<stdio.h>
#include<conio.h>
void roman(int);
void main()
{
  int n;
  clrscr();
  printf("Enter the Number: ");
  scanf("%d",&n);
  roman(n);
  getch();
}
void roman(int n)
{
  if(n>=1000)
  {
    printf("M");
    roman(n-1000);
  }
  if(n>=900 && n<1000)
  {
    printf("C");
    roman(n+100);
  }
  if(n>=500 && n<900)
  {
    printf("D");
    roman(n-500);
  }
  if(n>=400 && n<500)
  {
    printf("C");
    roman(n+100);
  }
  if(n>=100 && n<400)
  {
    printf("C");
    roman(n-100);
  }
  if(n>=90 && n<100)
  {
    printf("X");
    roman(n+10);
  }
  if(n>=50 && n<90)
  {
    printf("L");
    roman(n-50);
  }
  if(n>=40 && n<50)
  {
    printf("X");
    roman(n+10);
  }
  if(n>=10 && n<40)
  {
    printf("X");
    roman(n-10);
  }
  if(n==9)
  {
    printf("I");
    roman(n+1);
  }
  if(n>=5 && n<9)
  {
    printf("V");
    roman(n-5);
  }
  if(n==4)
  {
    printf("I");
    roman(n+1);
  }
  if(n>0 && n<=3)
  {
    printf("I");
    roman(n-1);
  }
  if(n==0)
    return;
}
