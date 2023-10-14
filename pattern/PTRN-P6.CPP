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
    for(j=1;j<n-i;j++)
      printf(" ");
    for(k=0;k<=i;k++)
      printf("*");
    printf("\n");
  }
  getch();
}


