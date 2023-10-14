#include<stdio.h>
#include<conio.h>
void U(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  U(n);
  getch();
}
void U(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==n && j<=2)
	printf(" ");
      else if(j==1 || j==n/2+2 || i==n)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

