#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  char A=65;
  clrscr();
  printf("Enter the Range= ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    printf("%c ",A);
    A++;
    printf("\n");

  }
  getch();
}
