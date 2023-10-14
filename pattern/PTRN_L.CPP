#include<stdio.h>
#include<conio.h>
void L(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  L(n);
  getch();
}
void L(int n)
{
  int i,j;
  for(i=1;i<n;i++)
  {
    printf("* ");
    printf("\n");
  }
  for(j=1;j<=n/2+2;j++)
    printf("* ");

}

