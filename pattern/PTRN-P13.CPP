#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n;
  char A=65;
  clrscr();
  printf("Enter the Range= ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<=n-i;j++)
     printf(" ");
    for(k=0;k<=i;k++)
     printf("%c ",A);
    A++;
    printf("\n");

  }
  getch();
}
