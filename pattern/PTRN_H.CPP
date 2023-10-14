#include<stdio.h>
#include<conio.h>
void H(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  H(n);
  getch();
}
void H(int n)
{
  int i,j;
  if(n%2==0)
  n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(j==1 || i==n/2+1 || j==n/2+2)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

