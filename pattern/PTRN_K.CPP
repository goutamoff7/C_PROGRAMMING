#include<stdio.h>
#include<conio.h>
void K(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  K(n);
  getch();
}
void K(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j==1 || i+j==n+1 || i>n/2 && i==j)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

