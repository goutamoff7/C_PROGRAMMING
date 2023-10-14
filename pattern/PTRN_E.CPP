#include<stdio.h>
#include<conio.h>
void E(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  E(n);
  getch();
}
void E(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==n/2+1 && j>n/2)
	printf(" ");
      else if(j==1 || i==1 || i==n || i==n/2+1)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

