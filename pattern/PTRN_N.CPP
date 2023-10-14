#include<stdio.h>
#include<conio.h>
void N(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  N(n);
  getch();
}
void N(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j==1 || j==n || i==j)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


