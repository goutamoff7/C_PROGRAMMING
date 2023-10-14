#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n,A=65;
  clrscr();
  printf("Enter the range = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
      printf(" ");
    for(k=0;k<i;k++)
      printf("%c",A+k);
    printf("\n");
  }
  getch();
}

