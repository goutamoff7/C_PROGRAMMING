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
  static p=2;
  p++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(j==1 || i<=n/2 && j==n/2+2-i || i>=n/2+1 && j==p++)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}