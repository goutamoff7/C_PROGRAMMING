/*WAP to print the largest value using function*/
#include<stdio.h>
#include<conio.h>
int large(int,int);
void main()
  {
    int a,b,c;
    clrscr();
    printf("Enter 2 Value = ");
    scanf("%d%d",&a,&b);
    c=large(a,b);
    printf("%d is larger",c);
    getch();
  }
int large(int x,int y)
{
  if(x>y)
  return x;
  else
  return y;
}
