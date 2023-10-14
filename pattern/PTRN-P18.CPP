#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  char A=65;
  clrscr();
  printf("Enter The Range= ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
      printf("%c ",A+j);
    printf("\n");
  }
  getch();
}