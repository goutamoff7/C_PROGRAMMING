#include<stdio.h>
#include<conio.h>
void D(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  D(n);
  getch();
}
void D(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j==n/2+2  || i==n && j==n/2+2)
	printf(" ");
      else if(j==1 || i==1 || i==n || j==n/2+2)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

