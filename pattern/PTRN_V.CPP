#include<stdio.h>
#include<conio.h>
void V(int);
void main()
{
  int n,i,j,k;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  V(n);
  getch();
}
void V(int n)
{
  int i,j,k;
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
      printf(" ");
    for(k=1;k<=i*2-1;k++)
    {
      if(k==1 || k==i*2-1)
	printf("*");
      else
	printf(" ");
    }
    printf("\n");
  }
}


