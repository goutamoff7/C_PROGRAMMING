#include<stdio.h>
#include<conio.h>
void B(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  B(n);
  getch();
}
void B(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+1;j++)
    {
      if(i==1 && j==n/2+1  || i==n/2+1 && j==n/2+1 || i==n && j==n/2+1)
	printf(" ");
      else if(j==1 || j==n/2+1 || i==1 || i==n/2+1 || i==n)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}
