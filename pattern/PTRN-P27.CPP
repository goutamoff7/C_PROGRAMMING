#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n;
  clrscr();
  printf("Enter the Range= ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
      printf("*");
    printf("\n");
  }
  for(i=1;i<n;i++)
  {
    for(j=0;j<=i;j++)
      printf("*");
    printf("\n");
  }
  getch();
}