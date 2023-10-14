#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n;
  clrscr();
  printf("Enter The Range= ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=0;j<n-i;j++)
      printf(" ");
    for(k=1;k<=i;k++)
      printf("%d ",k);
    printf("\n");
  }
  getch();
}
