#include<stdio.h>
#include<conio.h>
void Q(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  Q(n);
  getch();
}
void Q(int n)
{
  int i,j;
  for(i=1;i<=n+1;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1 && j<=2 || i==n && j<=2)
	printf(" ");
      else if(j==1 && i<=n || i==1 || j==n || i==n || i>n/2+2 && i==j+1 )
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

