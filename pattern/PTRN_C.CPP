#include<stdio.h>
#include<conio.h>
void C(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  C(n);
  getch();
}
void C(int n)
{
  int i,j;
  if(n%2==0)
    n++;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+2;j++)
    {
      if(i==1 && j<=2 || i==n && j<=2)
	printf(" ");
      else if(j==1 || i==1 || i==n || i<=3 && j==n/2+2 ||  i>=n-2 && j==n/2+2)
	printf("* ");
      else
	printf("  ");
    }
    printf("\n");
  }
}

