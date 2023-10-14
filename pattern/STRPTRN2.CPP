#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,A=65;
  clrscr();
  printf("Enter the range = ");
  scanf("%d",&n);
  for(i=1;i<=n;i++) //for(i=n;i>=1;i--)
  {
    for(j=i;j<=n;j++)//for(j=i;j>=1;j--)
      printf("%c ",A+n-j);//printf("%c",a+j-1);
    printf("\n");
  }
  getch();
}

