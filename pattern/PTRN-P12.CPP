#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n,p=1;
  clrscr();
  printf("Enter The Range= ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
      printf(" ");
    for(k=1;k<=i;k++)
      printf("%d ",p);
    p++;
    printf("\n");
  }
  getch();
}


