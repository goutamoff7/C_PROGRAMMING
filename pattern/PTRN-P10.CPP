#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n;
  char A=65;
  clrscr();
  printf("Enter the Range= ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
      printf(" ");
    for(k=n-i;k<n;k++)
      printf("%c ",A+k);
    printf("\n");

  }
  getch();
}
