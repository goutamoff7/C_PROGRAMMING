#include<stdio.h>
#include<conio.h>
void Y(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  Y(n);
  getch();
}
void Y(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i<=n/2+1 && i==j || i<=n/2+1 && i+j==n+1 || i>n/2+1 && j==n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


