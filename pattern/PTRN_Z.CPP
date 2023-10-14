#include<stdio.h>
#include<conio.h>
void Z(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  Z(n);
  getch();
}
void Z(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1 || i==n || i+j==n+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


