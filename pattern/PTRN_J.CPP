#include<stdio.h>
#include<conio.h>
void J(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  J(n);
  getch();
}
void J(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==n && j<=2)
	printf(" ");
      else if(i==n || j==n/2+2 ||  i>=n-2 && j==n/2+2 || j==1 && i>n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

