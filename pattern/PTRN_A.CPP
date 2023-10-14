#include<stdio.h>
#include<conio.h>
void A(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  A(n);
  getch();
}
void A(int n)
{
  int i,j,k;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
      printf(" ");
    for(k=1;k<=i*2-1;k++)
    {
      if(k==1 || k==i*2-1 || i==n/2+1)
	printf("*");
      else
	printf(" ");
    }
    printf("\n");
  }
}
