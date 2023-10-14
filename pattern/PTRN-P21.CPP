#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n;
  clrscr();
  printf("Enter The Range= ");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
      printf(" ");
    for(k=1;k<i*2;k++)
      printf("*");
    printf("\n");
  }
  getch();
}