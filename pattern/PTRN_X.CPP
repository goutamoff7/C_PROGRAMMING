#include<stdio.h>
#include<conio.h>
void X(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  X(n);
  getch();
}
void X(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==j || i+j==n+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


