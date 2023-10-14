#include<stdio.h>
#include<conio.h>
void W(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  W(n);
  getch();
}
void W(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j==1 || j==n || i>n/2 && j+i==n+1 || i>n/2 && i==j)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}


