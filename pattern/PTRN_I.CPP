#include<stdio.h>
#include<conio.h>
void I(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  I(n);
  getch();
}
void I(int n)
{
  int i,j,p;
  p=n/2+2;
  if(p%2==0)
    p++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=p;j++)
    {
      if(i==1 || i==n || j==p/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


