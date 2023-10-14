#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n;
  clrscr();
  printf("Enter The Range= ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
      printf(" ");
    for(k=0;k<n-i;k++)
      printf("*");
    printf("\n");
  }
  getch();
}